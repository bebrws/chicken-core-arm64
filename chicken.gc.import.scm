;;;; chicken.gc.import.scm - GENERATED BY CHICKEN 5.2.0 -*- Scheme -*-

(##sys#with-environment
  (lambda ()
    (##sys#register-compiled-module
      'chicken.gc
      'library
      (scheme#list)
      '((current-gc-milliseconds . chicken.gc#current-gc-milliseconds)
        (gc . chicken.gc#gc)
        (memory-statistics . chicken.gc#memory-statistics)
        (set-finalizer! . chicken.gc#set-finalizer!)
        (set-gc-report! . chicken.gc#set-gc-report!)
        (force-finalizers . chicken.gc#force-finalizers))
      (scheme#list)
      (scheme#list))))

;; END OF FILE