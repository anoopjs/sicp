(define (reverse items)
	(if (null? items)
		'()	
		(append (reverse (cdr items)) (list (car items)))))

(display (reverse '(1 2 3 4 5)))
