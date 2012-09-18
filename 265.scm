(load "264.scm")

(define (union-set set1 set2)
	(cond ((null? set1) set2)
		  ((null? set2) set1)
		  ((= (car set1) (car set2))
		  	(cons (car set1) (union-set (cdr set1) (cdr set2))))
		  ((< (car set1) (car set2))
		  	(cons (car set1) (union-set (cdr set1) set2)))
		  ((> (car set1) (car set2))
		  	(cons (car set2) (union-set set1 (cdr set2))))))

(define (intersection-set set1 set2)
	(if (or (null? set1) (null? set2))
		'()
		(let ((x1 (car set1)) (x2 (car set2)))
			(cond ((= x1 x2)
					(cons x1 (intersection-set (cdr set1) (cdr set2))))
				  ((< x1 x2)
				  	(intersection-set (cdr set1) set2))
				  ((< x2 x1)
				  	(intersection-set set1 (cdr set2)))))))


(define (union-set-tree tree1 tree2)
	(list->tree (union-set (tree->list-2 tree1) (tree->list-2 tree2))))

(define (intersection-set-tree tree1 tree2)
	(list->tree (intersection-set (tree->list-2 tree1) (tree->list-2 tree2))))
