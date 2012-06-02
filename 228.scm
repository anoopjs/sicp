(define x (list (list 1 2 5 7) (list 3 4 6 8)))

(define (fringe tree)
	(if (null? tree)
	'()
	(append (car tree) (fringe (cdr tree)))))

(display (fringe x))
