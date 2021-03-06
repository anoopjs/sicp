(define (element-of-set? x set)
	(cond ((null? set) #f)
		  ((equal? x (car set)) #t)
		  (else (element-of-set? x (cdr set)))))

(define (adjoin-set x set) (cons x set))

(define (union-set set1 set2) (append set1 set2))

(define (remove-object object set)
	(if (equal? (car set) object)
		(cdr set)	
		(append (list (car set)) (remove-object object (cdr set)))))


(define (intersection-set set1 set2)
	(cond ((or (null? set1) (null? set2)) '())
		  ((element-of-set? (car set1) set2)
			(cons (car set1) (intersection-set (cdr set1) (remove-object (car set1) set2))))
		  (else (intersection-set (cdr set1) set2))))
