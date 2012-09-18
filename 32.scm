(define (make-monitored f)
	(let ((val 0))
		(lambda (arg)
			(cond ((eq? arg 'how-many-calls?)
						val)
				  ((eq? arg 'reset-count)
				  		(set! val 0))
				  (else (begin (set! val (+ val 1)) (f arg)))))))
