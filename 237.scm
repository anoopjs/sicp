(define (dot-product v w)
	(accumulate + 0 (map * v w)))

(define (accumulate op initial sequence)
	(if (null? sequence)
		initial
		(op (car sequence)
			(accumulate op initial (cdr sequence)))))

(define (accumulate-n op init seqs)
	(cond ((null? seqs) '())
		  ((null? (car seqs)) '())
		  (else (cons (accumulate op init (map car seqs))
				(accumulate-n op init (map cdr seqs))))))

(define (matrix-*-vector m v)
	(map (lambda (x) (dot-product v x)) m))

(define (transpose mat)
	(accumulate-n cons '() mat))

(define (matrix-*-matrix m n)
	(let ((cols (transpose n)))
		(map (lambda (x) (matrix-*-vector cols x)) m)))

(display (matrix-*-matrix '((1 1) (2 2)) '((1 2) (1 2))))
