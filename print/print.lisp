(defun primes (m n)
  "list the primes in the range m <= p <= n"
  (declare ((integer 2 2147483647) m n)
           (optimize (speed 3) (safety 0)))
  (let ((p (make-array (1+ (- n m))
                       :element-type 'bit
                       :initial-element 1)))
    (loop for i from 2 upto (isqrt n)
       do (loop for j
             from (* i (max 2 (ceiling m i)))
             upto (* i (floor n i)) by i
             do (setf (bit p (- j m)) 0)))
    (loop for i from 0 upto (- n m)
       if (= 1 (bit p i))
       collect (the fixnum (+ m i)))))

(defun main ()
  (let ((tests (read)))
    (loop repeat tests
       for m = (read)
       for n = (read)
       do (loop for p in (primes m n)
             do (prin1 p) (terpri)))))

(main)
