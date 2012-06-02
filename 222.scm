(define square (lambda (x) (* x x)))

(define (square-list items)
	(define (iter things answer)
		(if (null? things)
			answer
			(iter (cdr things)
				(append answer (list (square (car things)))))))
	(iter items '()))
(display (square-list '(1 2 3 4)))
