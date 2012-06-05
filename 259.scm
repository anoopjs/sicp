(define (element-of-set? x set)
	(cond ((null? set) #f)
		  ((equal? x (car set)) #t)
		  (else (element-of-set? x (cdr set)))))

(define (adjoin-set x set)
	(if (element-of-set? x set)
		set
		(cons x set)))

(define (union-set set1 set2)
	(if (null? set2)
		set1
		(union-set (adjoin-set (car set2) set1) (cdr set2))))

(define (intersection-set set1 set2)
	(cond ((or (null? set1) (null? set2)) '())
		  ((element-of-set? (car set1) set2)
			(cons (car set1) (intersection-set (cdr set1) set2)))
		  (else (intersection-set (cdr set1) set2))))
