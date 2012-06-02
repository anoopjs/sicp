(load "test.scm")

(define (unique-triplets n)
	(flat-map 
		(lambda (i) (flat-map 
			(lambda (j) (map 
							(lambda (k) (list i j k)) (enumerate-interval 1 (- j 1)))) 
			(enumerate-interval 1 (- i 1)))) 
		(enumerate-interval 1 n)))

(define (ordered-triplets n s)
	(filter (lambda (x) (= (accumulate + 0 x) s)) (unique-triplets n))) 
