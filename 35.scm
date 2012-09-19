(define (estimate-pi trials)
	(* 4.0 (monte-carlo trials cesaro-test)))

(define (cesaro-test trials)
	(<= (+ (expt (random (+ trials 1)) 2) (expt (random (+ trials 1)) 2)) (expt trials 2))) 

(define (monte-carlo trials experiment)
	(define (iter trials-remaining trials-passed)
		(cond ((= trials-remaining 0)
			   (/ trials-passed trials))
			  ((experiment trials)
			   (iter (- trials-remaining 1) (+ trials-passed 1)))
			  (else
			  	(iter (- trials-remaining 1) trials-passed))))
	(iter trials 0))
