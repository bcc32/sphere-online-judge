(defun primes (m n)
  (if (< m 2) (primes 2 n)
      (let ((p (make-array (1+ (- n m))
                           :element-type 'bit
                           :initial-element 1)))
        (loop for i from 2 upto (isqrt n)
           do (loop for j from (max 2 (ceiling m i)) upto (floor n i)
                 do (setf (bit p (- (* i j) m)) 0)))
        (loop for i from 0 upto (- n m)
           if (= 1 (bit p i))
           collect (+ m i)))))

(defun main ()
  (let ((tests (read)))
    (loop repeat tests
       for m = (read)
       for n = (read)
       do (loop for p in (primes m n)
             do (prin1 p) (terpri))
         (terpri))))

(main)
