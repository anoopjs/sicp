(load "test.scm")

(define (adjoin-position new k rest)
	(cons (list k new) rest))

(define (safe? k lst)
	(let ((latest (car lst)))
		(and 
			#t
			(accumulate (lambda (x y) (and (not (= (cadr x) (cadr latest))) y)) #t (cdr lst))
			(accumulate (lambda (x y) (and (not (= (abs (- (car latest) (car x))) (abs (- (cadr latest) (cadr x))))) y)) #t (cdr lst)))))

(define empty-board
	'())

(define (queens board-size)
	(define (queen-cols k)
		(if (= k 0)
			(list empty-board)
			(filter
			 (lambda (positions) (safe? k positions))
			 (flat-map
				(lambda (rest-of-queens)
					(map (lambda (new-row)
							(adjoin-position new-row k rest-of-queens))
						(enumerate-interval 1 board-size)))
				(queen-cols (- k 1))))))
	(queen-cols board-size))

(map (lambda (x) (display x) (newline)) (queens 8))
