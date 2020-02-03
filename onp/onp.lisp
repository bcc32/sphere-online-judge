(defclass expression () ()
  (:documentation "Represents an arithmetic expression with binary operators"))

(defclass op-expression (expression)
  ((left :initarg :left :accessor left)
   (right :initarg :right :accessor right)
   (operator :initarg :operator :accessor operator)))

(defmethod print-object ((expr op-expression) stream)
  (print-object (left expr) stream)
  (print-object (right expr) stream)
  (write-char (operator expr) stream))

(defclass var-expression (expression)
  ((name :initarg :name :accessor name)))

(defmethod print-object ((expr var-expression) stream)
  (write-char (name expr) stream))

(defun read-expr (&optional (stream *standard-input*))
  (let ((next-char (peek-char t stream)))
    (cond
      ((alpha-char-p next-char)
       (make-instance 'var-expression :name (read-char stream)))
      ((char= #\( next-char)
       (read-char stream) ; left paren
       (let* ((left (read-expr stream)) (op (read-char stream))
              (right (read-expr stream)))
         (read-char stream) ; right paren
         (make-instance 'op-expression :left left :operator op :right right)))
      (t (error "malformed expression")))))

(defun main ()
  (let ((tests (read)))
    (loop repeat tests
       for expr = (read-expr)
       do (prin1 expr) (terpri))))

(main)
