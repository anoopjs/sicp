(define (tan-cf x k)
	(define  (tan-cf-rec curr)
		(- (+ (* curr 2) 1) (/ (* x x)
			(if (< curr k)
				(tan-cf-rec (+ curr 1))
				1))))
	(/ x (tan-cf-rec 0)))

(display (tan-cf 1.4 100)) 
