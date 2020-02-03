(loop for num = (read)
   until (= 42 num)
   do (format t "~d~%" num))
