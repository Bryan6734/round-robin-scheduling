# 

## Topic
Round robin scheduling! 

## Why I picked it
I picked it because I've been pretty interested in scheduling and how differnet algorithms go about triaging different processes. It's crazy that there aren't actually THAT many processes that can run concurrently on modern machines, and that actually the fact that I can run 30 apps at the same time is just a result of the fact that each CPU is actually switching which process it's running so quickly that we can't even tell. 

## Most interesting discoveries

Some snippets from conversations with my AIs:
- Ready processes wait in a line, which is a queue.
- The process at the front runs for up to one quantum.
- If it finishes within that quantum, it leaves.
- If it doesn’t, the OS pauses it and sends it to the back of the line, and the next process gets a turn.
- Repeat.

- In English, “round robin” goes back at least to the 1700s. It meant a petition or protest letter whose signatures were arranged in a circle, so nobody could be singled out as the first signer or ringleader. Later the term was used for tournaments where every player plays every other player in turn. The common thread is equal treatment with no one ahead of anyone else, and that carried over to computing. That's so cool!

Round robin is a pretty standard load-balancing strategy too, which gets into my earlier interest.

## Code and how to run it
See the How to Run md for each respective code sample!

## Resources
See resources.md

## What I'd still like to learn
I'd like to know how round robin can be applied to things like distributed systems, or when you're handling systems that are getting millions of requests and you need to prioritize.


## Code and how to run it

- `code/ostep-simulator/`: instructions for downloading and running the OSTEP scheduling simulator (Python):

      curl -LO https://raw.githubusercontent.com/remzi-arpacidusseau/ostep-homework/master/cpu-sched/scheduler.py
      python3 scheduler.py -p RR -l 4,2,1 -q 1 -c
      python3 scheduler.py -p FIFO -l 4,2,1 -c

- `code/third-party/`: two round robin simulators in C written by other people (MIT license). Not my code; see each folder's `SOURCE.md` for author, source, and build commands.
- `code/my-experiments/`: my own experiments.

## Slides

Google Slides: https://docs.google.com/presentation/d/1Clma4mvsR6N4G4DelhmOyIYa1vHz0tocKte5pmyA6f4/edit?usp=sharing

## Resources

See [resources.md](resources.md).
