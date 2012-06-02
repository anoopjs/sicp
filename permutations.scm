(load "test.scm")

(define (permutations s)
	(if (null? s)
		(list '())
		(flat-map (lambda (x)
			(map (lambda (p) (cons x p))
				(permutations (remove x s))))
			s)))

(define (remove item sequence)
	(filter (lambda (x) (not (= item x))) sequence))

(display (permutations '(1 2 3)))


