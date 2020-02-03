(defun doit (n)
  (loop for i from 1 upto 12
     for pow = (expt 5 i)
     sum (floor n pow)))

(defun main ()
  (let ((tests (read)))
    (loop repeat tests
       for n = (read)
       do (prin1 (doit n)) (terpri))))

(main)
