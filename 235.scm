(define (accumulate op initial sequence)
	(if (null? sequence)
		initial
		(op (car sequence)
			(accumulate op initial (cdr sequence)))))

(define (count-leaves t)
	(accumulate + 0 (map (lambda (node)
							(if (pair? node)
								(count-leaves node)
								1))
						t)))

(display (count-leaves '((1 2) ((3 4) (5 6)))))
