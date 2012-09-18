(define (make-accumulator value)
	(lambda (sum)
		(begin (set! value (+ value sum)) value)))


(define A (make-accumulator 5))
