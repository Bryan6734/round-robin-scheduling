OSTEP scheduler simulator (scheduler.py) by Remzi Arpaci-Dusseau.
Source: https://github.com/remzi-arpacidusseau/ostep-homework/tree/master/cpu-sched
Not copied here (the repo has no license file), so download it:

    curl -LO https://raw.githubusercontent.com/remzi-arpacidusseau/ostep-homework/master/cpu-sched/scheduler.py

Slide 9 example (Chrome = job 0 needs 4, Spotify = job 1 needs 2, Zoom = job 2 needs 1, quantum 1):

    python3 scheduler.py -p RR -l 4,2,1 -q 1 -c
    python3 scheduler.py -p FIFO -l 4,2,1 -c
