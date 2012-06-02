(define (first-of seqs)
	(map car seqs))

(define (rest-of seqs)
	(map cdr seqs))

(define (accumulate op initial sequence)
	(if (null? sequence)
		initial
		(op (car sequence)
			(accumulate op initial (cdr sequence)))))

(define (accumulate-n op init seqs)
	(cond ((null? seqs) '())
		  ((null? (car seqs)) '())
		  (else (cons (accumulate op init (first-of seqs))
				(accumulate-n op init (rest-of seqs))))))

(display (accumulate-n + 0 '((1 2 3) (4 5 6) (7 8 9) (10 11 12))))
