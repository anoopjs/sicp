(define (deep-reverse items)
	(cond ((null? items) '())
	((not (pair? items)) items)	  
	(else (append (deep-reverse (cdr items)) 
					(list (deep-reverse (car items)))))))

(display (deep-reverse '(((1 2) (((3 5) 6))))))
