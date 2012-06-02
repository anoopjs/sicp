(load "test.scm")

(define (unique-pairs n)
	(flat-map (lambda (i) (map (lambda (j) (list i j)) (enumerate-interval 1 (- i 1))))
		(enumerate-interval 1 n)))

(define (prime-sum-pairs n)
	(map make-pair-sum (filter prime-sum? (unique-pairs n))))

(display (prime-sum-pairs 5))
