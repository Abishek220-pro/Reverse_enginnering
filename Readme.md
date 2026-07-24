# Final Master Plan: Reverse Engineering (Self-Study + TryHackMe, Pre-Final Year -> Passout)

**Duration:** ~15 months | **Commitment:** 2-3 hrs/day, 6 days/week (Sunday = rest/catch-up)

**Goal:** Be job-ready for Junior Reverse Engineer / Malware Analyst roles before passout.

**Structure:**
- Phase 1 (Months 1-6): Foundations - C, Assembly, Ghidra, x64dbg/GDB
- Phase 2 (Months 7-12): Malware-oriented RE - Windows internals, malware analysis, scripting, YARA
- Phase 3 (Months 13-15): Exploitation basics, CTF practice, specialization capstone, job prep

**Portfolio target by end:** 15+ write-ups, 4-5 custom tools, 5+ YARA rules, 1 capstone project, polished resume/GitHub

Every Sunday is a rest/buffer day - use it to catch up if you fall behind, or genuinely rest. Don't skip rest; burnout kills consistency.

---

## PHASE 1: FOUNDATIONS

### Week 1 (Month 1) - C Core Syntax Refresher (Operators, Conditionals, Loops, Functions)

- **Day 1 (Mon):** Variables and data types recap: int, float, char, double - sizes and ranges
- **Day 2 (Tue):** Operators: arithmetic (+ - * / %), relational (== != < > <= >=), logical (&& || !)
- **Day 3 (Wed):** Conditional statements: if / else if / else, practice with 5 small problems
- **Day 4 (Thu):** switch-case statement: syntax, fall-through behavior, when to use vs if-else
- **Day 5 (Fri):** Loops: for loop - syntax, common patterns (counting, iterating arrays)
- **Day 6 (Sat):** Practice set: write 5 programs combining conditionals + for loops (FizzBuzz-style problems)
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 2 (Month 1) - C Core Syntax Refresher (Operators, Conditionals, Loops, Functions)

- **Day 1 (Mon):** Loops continued: while loop and do-while loop, differences and use cases
- **Day 2 (Tue):** break and continue statements, nested loops
- **Day 3 (Wed):** Functions: declaration, definition, return types, parameters
- **Day 4 (Thu):** Function prototypes and why headers declare them
- **Day 5 (Fri):** Scope rules: local vs global variables
- **Day 6 (Sat):** Practice set: write 5 programs using functions + loops (e.g. prime checker, factorial, pattern printing)
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 3 (Month 1) - C Fundamentals (Low-Level Focus)

- **Day 1 (Mon):** Variables, data types, memory layout (stack vs heap)
- **Day 2 (Tue):** Pointers basics: declaration, dereferencing, pointer arithmetic
- **Day 3 (Wed):** Arrays and pointers relationship, sizeof() behavior
- **Day 4 (Thu):** Structs and unions, memory alignment/padding
- **Day 5 (Fri):** Functions, call stack basics, pass by value vs reference
- **Day 6 (Sat):** Practice set: write 5 small C programs using pointers + structs
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 4 (Month 1) - C Fundamentals (Low-Level Focus)

- **Day 1 (Mon):** Dynamic memory: malloc/free, common bugs (leaks, double free)
- **Day 2 (Tue):** Bitwise operators: AND/OR/XOR/shifts, practical use cases
- **Day 3 (Wed):** Function pointers and their use in dispatch tables
- **Day 4 (Thu):** String handling in C (char arrays, buffer overflows intro)
- **Day 5 (Fri):** File I/O in C, reading binary files byte by byte
- **Day 6 (Sat):** Practice set: parse a small binary file's header in C
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 5 (Month 1) - C Fundamentals (Low-Level Focus)

- **Day 1 (Mon):** Multi-dimensional arrays and pointer-to-pointer
- **Day 2 (Tue):** Linked lists implementation from scratch
- **Day 3 (Wed):** Preprocessor macros, conditional compilation
- **Day 4 (Thu):** Compilation stages: preprocessing, compiling, assembling, linking
- **Day 5 (Fri):** Static vs dynamic linking, intro to object files (.o)
- **Day 6 (Sat):** Practice set: compile a program with -S flag, inspect assembly output
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 6 (Month 1) - C Fundamentals (Low-Level Focus)

- **Day 1 (Mon):** Undefined behavior in C (common pitfalls RE analysts must know)
- **Day 2 (Tue):** Stack frame anatomy: prologue/epilogue, local variables
- **Day 3 (Wed):** Calling conventions overview (cdecl, stdcall) conceptually
- **Day 4 (Thu):** Read: how compilers optimize code (-O0 vs -O2 differences)
- **Day 5 (Fri):** Review week: redo 2 hardest programs from scratch, no notes
- **Day 6 (Sat):** Weekly review + write short notes doc summarizing C internals learned
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 7 (Month 1-2) - C for Reverse Engineering (Endianness, Overflow, Type Punning)

- **Day 1 (Mon):** Endianness: little-endian vs big-endian, why it matters when parsing binary file formats
- **Day 2 (Tue):** Practice: write C code to read a 4-byte value and manually swap endianness
- **Day 3 (Wed):** Signed vs unsigned integers: how negative numbers are represented (two's complement)
- **Day 4 (Thu):** Integer overflow/underflow: write code that deliberately overflows, observe behavior
- **Day 5 (Fri):** Practice: predict output of 5 tricky signed/unsigned comparison snippets before running them
- **Day 6 (Sat):** Practice set: parse a binary file with mixed-endianness fields correctly
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 8 (Month 1-2) - C for Reverse Engineering (Endianness, Overflow, Type Punning)

- **Day 1 (Mon):** Type punning with unions: reading the same memory as int/float/bytes
- **Day 2 (Tue):** Practice: use a union to inspect the raw bytes of a float value
- **Day 3 (Wed):** Casting and reinterpreting pointers (e.g. treating a struct as a byte buffer)
- **Day 4 (Thu):** Enums: how they're represented in memory (just integers under the hood)
- **Day 5 (Fri):** Practice: write code that serializes a struct to a byte buffer and back
- **Day 6 (Sat):** Practice set: build a small binary format reader/writer using structs + unions
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 9 (Month 1-2) - C for Reverse Engineering (Endianness, Overflow, Type Punning)

- **Day 1 (Mon):** Variadic functions: how printf-style functions work (va_list, va_start, va_arg)
- **Day 2 (Tue):** Format string vulnerabilities: root cause in C (why %n and mismatched args are dangerous)
- **Day 3 (Wed):** Practice: write a program with a deliberate format string bug, observe the crash
- **Day 4 (Thu):** const and volatile qualifiers: what they mean for the compiler vs the CPU
- **Day 5 (Fri):** Inline assembly in C (__asm__ / asm blocks): how to embed and read it
- **Day 6 (Sat):** Practice: write a tiny C function with an inline asm instruction, compile, inspect disassembly
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 10 (Month 1-2) - C for Reverse Engineering (Endianness, Overflow, Type Punning)

- **Day 1 (Mon):** Header files, extern, and multi-file compilation: how larger C projects are structured
- **Day 2 (Tue):** Makefiles basics: why binaries are built the way they are (helps when reversing build artifacts)
- **Day 3 (Wed):** Command-line arguments (argc/argv) and environment variables in C
- **Day 4 (Thu):** Practice: write a multi-file C project, compile with a Makefile
- **Day 5 (Fri):** Weekly review: redo the endianness + union-based parsing exercises from memory, no notes
- **Day 6 (Sat):** Weekly review: consolidate a 'C internals for RE' cheat-sheet covering this week + weeks 1-4
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 11 (Month 2) - x86/x64 Assembly Fundamentals

- **Day 1 (Mon):** Intro to x86/x64 architecture: registers (general purpose, EFLAGS)
- **Day 2 (Tue):** Memory addressing modes, stack pointer vs base pointer
- **Day 3 (Wed):** Basic instructions: mov, add, sub, cmp, jmp
- **Day 4 (Thu):** Conditional jumps (je, jne, jg, jl) and how if/else compiles
- **Day 5 (Fri):** Write simple C program, compile, read generated assembly (AT&T vs Intel syntax)
- **Day 6 (Sat):** Practice: hand-translate 5 simple C snippets to assembly
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 12 (Month 2) - x86/x64 Assembly Fundamentals

- **Day 1 (Mon):** Function calls in assembly: call/ret, stack frame setup
- **Day 2 (Tue):** Calling conventions in depth: cdecl, stdcall, fastcall, x64 System V/Microsoft ABI
- **Day 3 (Wed):** Loops in assembly: for/while loop patterns
- **Day 4 (Thu):** Arrays and pointer arithmetic in assembly
- **Day 5 (Fri):** Practice: identify loop and array access patterns in disassembly
- **Day 6 (Sat):** Review + quiz yourself: read raw assembly, describe what C code produced it
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 13 (Month 2) - x86/x64 Assembly Fundamentals

- **Day 1 (Mon):** Structs and bitfields represented in assembly
- **Day 2 (Tue):** String operations in assembly (movs, cmps, lods)
- **Day 3 (Wed):** Introduction to x64 registers (RAX-R15), differences from x86
- **Day 4 (Thu):** SIMD/vector instructions overview (just recognition, not mastery)
- **Day 5 (Fri):** Practice: disassemble a small compiled binary with objdump
- **Day 6 (Sat):** Practice: annotate disassembly of a crackme with comments
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 14 (Month 2) - x86/x64 Assembly Fundamentals

- **Day 1 (Mon):** Stack-based buffer overflow concept (conceptual only, no exploitation yet)
- **Day 2 (Tue):** Function pointers and indirect calls in assembly
- **Day 3 (Wed):** Switch/case statement compilation patterns (jump tables)
- **Day 4 (Thu):** Recursion in assembly, stack growth visualization
- **Day 5 (Fri):** Practice: reverse a small 'guess the number' C binary by hand
- **Day 6 (Sat):** Weekly review: write a cheat-sheet of common asm patterns
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 15 (Month 2) - x86/x64 Assembly Fundamentals

- **Day 1 (Mon):** Install and set up Ghidra properly, explore UI (Listing, Decompiler, Symbol Tree)
- **Day 2 (Tue):** Ghidra basics: import binary, auto-analyze, navigate functions
- **Day 3 (Wed):** Renaming variables/functions in Ghidra decompiler view
- **Day 4 (Thu):** Cross-references (XREFs) - how to trace where data/functions are used
- **Day 5 (Fri):** Practice: open first crackme in Ghidra, identify main() logic
- **Day 6 (Sat):** Practice: use Ghidra decompiler to understand a simple binary
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 16 (Month 2) - x86/x64 Assembly Fundamentals

- **Day 1 (Mon):** Ghidra: bookmarks, comments, function signatures editing
- **Day 2 (Tue):** Ghidra scripting intro (Python/Java) - what it's used for
- **Day 3 (Wed):** Practice: solve crackme #1 fully using Ghidra static analysis
- **Day 4 (Thu):** Write detailed write-up of crackme #1 solution (portfolio piece)
- **Day 5 (Fri):** Practice: start crackme #2 (slightly harder)
- **Day 6 (Sat):** Review week: consolidate Ghidra shortcuts and workflow notes
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 17 (Month 3) - OS Fundamentals + PE File Format

- **Day 1 (Mon):** OS fundamentals: processes vs threads, process memory layout
- **Day 2 (Tue):** Virtual memory concepts: paging, address space
- **Day 3 (Wed):** Windows process internals overview (PEB, TEB basics)
- **Day 4 (Thu):** Files, handles, and basic Windows API concepts
- **Day 5 (Fri):** Practice: use Process Explorer/Process Hacker to inspect running processes
- **Day 6 (Sat):** Review + notes: OS concepts relevant to RE
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 18 (Month 3) - OS Fundamentals + PE File Format

- **Day 1 (Mon):** Introduction to PE (Portable Executable) file format
- **Day 2 (Tue):** PE headers: DOS header, NT headers, optional header
- **Day 3 (Wed):** Section table: .text, .data, .rdata, .rsrc explained
- **Day 4 (Thu):** Import Address Table (IAT) and how dynamic linking works
- **Day 5 (Fri):** Practice: use PE-bear or CFF Explorer to inspect a real PE file
- **Day 6 (Sat):** Practice: manually identify imports/exports of a sample .exe
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 19 (Month 3) - OS Fundamentals + PE File Format

- **Day 1 (Mon):** Export table, resource section, and relocation table basics
- **Day 2 (Tue):** Entry point and how execution starts in a PE file
- **Day 3 (Wed):** Packed vs unpacked binaries - what packing looks like structurally
- **Day 4 (Thu):** DLLs: how they're loaded, exported functions
- **Day 5 (Fri):** Practice: compare a packed vs unpacked sample's PE headers
- **Day 6 (Sat):** Practice: identify signs of packing in a sample using PE-bear
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 20 (Month 3) - OS Fundamentals + PE File Format

- **Day 1 (Mon):** ELF file format basics (for completeness, Linux binaries)
- **Day 2 (Tue):** Comparing PE vs ELF structurally
- **Day 3 (Wed):** Basic WinAPI functions RE analysts see often (CreateFile, VirtualAlloc, etc.)
- **Day 4 (Thu):** Practice: annotate a disassembly noting WinAPI calls and their purpose
- **Day 5 (Fri):** Solve crackme #3 combining Ghidra + PE structure knowledge
- **Day 6 (Sat):** Weekly review: PE/ELF cheat-sheet finalized for portfolio notes
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 21 (Month 4) - Ghidra Static Analysis Practice

- **Day 1 (Mon):** Set up isolated lab VM (VirtualBox/VMware) for safe analysis practice
- **Day 2 (Tue):** Snapshot/revert workflow for safe binary analysis
- **Day 3 (Wed):** Practice: solve crackme #4 (medium difficulty)
- **Day 4 (Thu):** Practice: continue crackme #4, document approach
- **Day 5 (Fri):** Write-up: finalize crackme #4 write-up for GitHub
- **Day 6 (Sat):** Review week: revisit weakest topic from weeks 1-14
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 22 (Month 4) - Ghidra Static Analysis Practice

- **Day 1 (Mon):** Intro to control flow graphs (CFG) in Ghidra
- **Day 2 (Tue):** Identifying loops, conditionals, and function boundaries visually
- **Day 3 (Wed):** Practice: solve crackme #5 focusing on CFG navigation
- **Day 4 (Thu):** Practice: patch a simple license-check binary (change jump condition)
- **Day 5 (Fri):** Practice: patch and verify a serial-check crackme
- **Day 6 (Sat):** Write-up: document the patching process step-by-step
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 23 (Month 4) - Ghidra Static Analysis Practice

- **Day 1 (Mon):** Ghidra scripting basics: write a simple script to auto-rename functions
- **Day 2 (Tue):** Practice: use scripting to find all string references in a binary
- **Day 3 (Wed):** Practice: solve crackme #6 (harder, obfuscated logic)
- **Day 4 (Thu):** Practice: continue crackme #6
- **Day 5 (Fri):** Finish crackme #6, write detailed write-up
- **Day 6 (Sat):** Review: consolidate 3 write-ups so far into a portfolio README
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 24 (Month 4) - Ghidra Static Analysis Practice

- **Day 1 (Mon):** Anti-debugging/anti-analysis basics (concept only): what to expect
- **Day 2 (Tue):** Simple string obfuscation techniques and how to spot them in Ghidra
- **Day 3 (Wed):** Practice: solve a crackme with basic string obfuscation
- **Day 4 (Thu):** Practice: continue, document obfuscation-bypass approach
- **Day 5 (Fri):** Practice: solve one picoCTF reversing challenge
- **Day 6 (Sat):** Weekly review + portfolio GitHub repo structure cleanup
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 25 (Month 4) - Ghidra Static Analysis Practice

- **Day 1 (Mon):** Practice: solve 2 picoCTF reversing challenges
- **Day 2 (Tue):** Practice: solve 1 HackTheBox / crackmes.one reversing challenge
- **Day 3 (Wed):** Practice: continue harder challenge from previous day
- **Day 4 (Thu):** Write-up: document 1 CTF challenge solution in detail
- **Day 5 (Fri):** Practice: timed challenge - solve a new crackme under 90 minutes
- **Day 6 (Sat):** Review week: mock timed-challenge day (self-assessment)
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 26 (Month 4) - Ghidra Static Analysis Practice

- **Day 1 (Mon):** Milestone review: redo crackme #1 from week 6 - measure speed/confidence improvement
- **Day 2 (Tue):** Fill any gaps identified in milestone review
- **Day 3 (Wed):** Practice: 1 new crackme, no hints, solo attempt
- **Day 4 (Thu):** Practice: continue + write-up
- **Day 5 (Fri):** Portfolio: polish all Phase 1 write-ups (5-6 total), publish to GitHub
- **Day 6 (Sat):** Phase 1 wrap-up: write a short blog/summary post of skills gained
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 27 (Month 5-6) - x64dbg / GDB Dynamic Analysis

- **Day 1 (Mon):** Install and configure x64dbg, explore UI (CPU, breakpoints, memory view)
- **Day 2 (Tue):** Basics: setting breakpoints, stepping (step into/over), watching registers
- **Day 3 (Wed):** Practice: step through a simple crackme dynamically, compare to Ghidra's static view
- **Day 4 (Thu):** Practice: use memory breakpoints to find where a password is checked
- **Day 5 (Fri):** Practice: solve a crackme using ONLY dynamic analysis (no Ghidra)
- **Day 6 (Sat):** Write-up: document dynamic-only crackme solution
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 28 (Month 5-6) - x64dbg / GDB Dynamic Analysis

- **Day 1 (Mon):** GDB basics (for Linux binaries): breakpoints, stepping, register/memory inspection
- **Day 2 (Tue):** GDB with GEF/pwndbg plugin for better RE workflow
- **Day 3 (Wed):** Practice: solve a Linux crackme using GDB
- **Day 4 (Thu):** Practice: continue + compare GDB workflow to x64dbg
- **Day 5 (Fri):** Practice: solve a crackme combining static (Ghidra) + dynamic (x64dbg) analysis
- **Day 6 (Sat):** Weekly review: static vs dynamic - when to use which, write notes
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 29 (Month 5-6) - x64dbg / GDB Dynamic Analysis

- **Day 1 (Mon):** Patching binaries in x64dbg directly (NOP-ing checks, changing jumps)
- **Day 2 (Tue):** Practice: patch and save a modified working binary
- **Day 3 (Wed):** Practice: solve a harder crackme requiring patching to bypass
- **Day 4 (Thu):** Practice: continue, write detailed write-up
- **Day 5 (Fri):** Practice: 1 new CTF reversing challenge (timed, 2 hours)
- **Day 6 (Sat):** Review: consolidate patching techniques into cheat-sheet
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 30 (Month 5-6) - x64dbg / GDB Dynamic Analysis

- **Day 1 (Mon):** Intro to basic anti-debug tricks (IsDebuggerPresent) and how to bypass them
- **Day 2 (Tue):** Practice: solve a crackme with a basic anti-debug check
- **Day 3 (Wed):** Practice: continue + document bypass technique
- **Day 4 (Thu):** Practice: 1 new crackme, mixed static+dynamic approach
- **Day 5 (Fri):** Practice: continue + write-up
- **Day 6 (Sat):** Weekly review + portfolio update
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 31 (Month 5-6) - x64dbg / GDB Dynamic Analysis

- **Day 1 (Mon):** Build first small RE tool: a Python string decoder script for a specific encoding scheme
- **Day 2 (Tue):** Continue building the string decoder, test on sample binaries
- **Day 3 (Wed):** Build second tool: simple config/data extractor for a crackme series
- **Day 4 (Thu):** Practice: solve 1 new challenge applying your own tool
- **Day 5 (Fri):** Finalize both tools, add README + usage docs, push to GitHub
- **Day 6 (Sat):** Weekly review: tools portfolio (2 tools + 8-9 write-ups) sanity check
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 32 (Month 5-6) - x64dbg / GDB Dynamic Analysis

- **Day 1 (Mon):** Phase 1 milestone project: pick hardest crackme so far, solve fully solo
- **Day 2 (Tue):** Continue milestone project
- **Day 3 (Wed):** Write comprehensive write-up (this becomes flagship portfolio piece)
- **Day 4 (Thu):** Polish GitHub repo: clear structure, README index of all write-ups/tools
- **Day 5 (Fri):** Self-assessment: list confidently-known vs shaky topics from Phase 1
- **Day 6 (Sat):** PHASE 1 COMPLETE - rest day / light review, prepare for Phase 2
- **Day 7 (Sun):** Rest / catch-up / light review

## PHASE 2: MALWARE-ORIENTED RE

### Week 33 (Month 7) - Windows Internals Deep Dive

- **Day 1 (Mon):** Windows internals deep dive: PEB/TEB structures in detail
- **Day 2 (Tue):** Process creation flow (CreateProcess internals conceptually)
- **Day 3 (Wed):** Threads, handles, and the Windows object manager (concept level)
- **Day 4 (Thu):** Practice: inspect PEB of a running process using x64dbg/WinDbg
- **Day 5 (Fri):** Practice: identify handle usage in a sample binary's imports
- **Day 6 (Sat):** Weekly review: Windows internals notes finalized
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 34 (Month 7) - Windows Internals Deep Dive

- **Day 1 (Mon):** Common WinAPI groups used by malware: file, registry, network, process APIs
- **Day 2 (Tue):** Registry persistence techniques (Run keys, services) - concept + detection
- **Day 3 (Wed):** Practice: identify persistence-related API calls in a benign sample
- **Day 4 (Thu):** Practice: map a binary's imports to functional categories (file/net/registry/etc.)
- **Day 5 (Fri):** Practice: solve a crackme themed around registry/file operations
- **Day 6 (Sat):** Weekly review + notes on common WinAPI 'red flag' functions
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 35 (Month 7) - Windows Internals Deep Dive

- **Day 1 (Mon):** Networking APIs: sockets, WinINet, WinHTTP basics for C2 recognition
- **Day 2 (Tue):** Practice: identify network-related imports in a sample, hypothesize behavior
- **Day 3 (Wed):** Practice: set up a safe isolated network lab (INetSim / fake DNS) for later dynamic analysis
- **Day 4 (Thu):** Practice: continue lab setup, verify sample can't reach real internet
- **Day 5 (Fri):** Practice: solve 1 CTF reversing challenge (TryHackMe / picoCTF / HTB - rotate platforms) - alternate between TryHackMe and picoCTF/HTB (timed)
- **Day 6 (Sat):** Weekly review: lab environment finalized and documented
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 36 (Month 7) - Windows Internals Deep Dive

- **Day 1 (Mon):** Windows services and DLL injection concepts (how malware persists/hides)
- **Day 2 (Tue):** Practice: read about common injection techniques (concept only, no live malware yet)
- **Day 3 (Wed):** Practice: solve a crackme involving DLL/library loading logic
- **Day 4 (Thu):** Practice: continue + write-up
- **Day 5 (Fri):** Practice: 1 new CTF challenge on TryHackMe
- **Day 6 (Sat):** PHASE MILESTONE: Windows internals + WinAPI quiz - self-test with flashcards
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 37 (Month 8-9) - Malware Behavior Study (Lab Practice)

- **Day 1 (Mon):** Malware fundamentals: what malware typically does (persistence, evasion, payload)
- **Day 2 (Tue):** Malware categories overview: trojans, ransomware, loaders, infostealers
- **Day 3 (Wed):** Set up dedicated malware analysis lab VM (isolated, snapshot-ready, no host shares)
- **Day 4 (Thu):** Source safe sample sets (e.g. theZoo, MalwareBazaar - educational/research use only)
- **Day 5 (Fri):** Practice: static triage of first safe sample (strings, PE headers, imports)
- **Day 6 (Sat):** Weekly review: lab + triage workflow documented
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 38 (Month 8-9) - Malware Behavior Study (Lab Practice)

- **Day 1 (Mon):** Static analysis workflow: strings, hashes, PE structure, packer detection
- **Day 2 (Tue):** Practice: run static triage on 2nd sample, note suspicious indicators
- **Day 3 (Wed):** Dynamic analysis workflow: sandbox behavior (process/file/registry monitoring concepts)
- **Day 4 (Thu):** Practice: analyze sample behavior using Process Monitor in isolated VM
- **Day 5 (Fri):** Practice: correlate static findings with dynamic behavior for same sample
- **Day 6 (Sat):** Weekly review: static+dynamic combined workflow notes
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 39 (Month 8-9) - Malware Behavior Study (Lab Practice)

- **Day 1 (Mon):** Packing/obfuscation deep dive: common packers (UPX) and how to spot/unpack them
- **Day 2 (Tue):** Practice: unpack a UPX-packed sample, analyze unpacked binary
- **Day 3 (Wed):** Persistence mechanism identification in a real (safe) sample
- **Day 4 (Thu):** Practice: document persistence technique found, map to MITRE ATT&CK technique ID
- **Day 5 (Fri):** Practice: analyze 3rd sample end-to-end (static + dynamic + persistence)
- **Day 6 (Sat):** Weekly review: first full sample analysis write-up drafted
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 40 (Month 8-9) - Malware Behavior Study (Lab Practice)

- **Day 1 (Mon):** C2 (command & control) communication patterns - what to look for
- **Day 2 (Tue):** Practice: identify potential C2 indicators (domains/IPs/URLs) in a sample
- **Day 3 (Wed):** IOC (Indicator of Compromise) extraction: hashes, domains, mutexes, registry keys
- **Day 4 (Thu):** Practice: write structured IOC report for analyzed sample
- **Day 5 (Fri):** Practice: 1 CTF reversing challenge (TryHackMe / picoCTF / HTB - rotate platforms) (timed, applying malware-analysis mindset)
- **Day 6 (Sat):** Weekly review: IOC reporting template finalized for reuse
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 41 (Month 8-9) - Malware Behavior Study (Lab Practice)

- **Day 1 (Mon):** Anti-analysis techniques malware uses: VM detection, sandbox evasion (concept)
- **Day 2 (Tue):** Practice: identify anti-VM checks in a sample if present
- **Day 3 (Wed):** Practice: analyze 4th sample fully, more complex than previous ones
- **Day 4 (Thu):** Practice: continue 4th sample analysis
- **Day 5 (Fri):** Finish 4th sample analysis, write comprehensive report
- **Day 6 (Sat):** Weekly review: consolidate 2 full malware analysis write-ups
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 42 (Month 8-9) - Malware Behavior Study (Lab Practice)

- **Day 1 (Mon):** Credential theft / infostealer behavior patterns (concept + sample if available)
- **Day 2 (Tue):** Practice: analyze a sample exhibiting data-exfiltration-like behavior
- **Day 3 (Wed):** Practice: continue, focus on documenting behavior chain clearly
- **Day 4 (Thu):** Practice: 1 new CTF challenge on TryHackMe
- **Day 5 (Fri):** Milestone: pick most complex sample analyzed so far, polish into flagship write-up
- **Day 6 (Sat):** PHASE MILESTONE: self-review - can you triage a new sample in under 2 hours?
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 43 (Month 9-10) - Python Scripting for RE

- **Day 1 (Mon):** Python for RE: intro to relevant libraries (pefile, capstone basics)
- **Day 2 (Tue):** Practice: write a script using pefile to dump PE header info automatically
- **Day 3 (Wed):** Practice: extend script to list imports/exports automatically
- **Day 4 (Thu):** Practice: test script on 3-4 different binaries, handle edge cases
- **Day 5 (Fri):** Finalize PE-info dumper tool, add docs, push to GitHub
- **Day 6 (Sat):** Weekly review: tool #3 for portfolio complete
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 44 (Month 9-10) - Python Scripting for RE

- **Day 1 (Mon):** String/config extraction scripting: automate what you did manually earlier
- **Day 2 (Tue):** Practice: build a generic string-decoder framework (XOR, base64, custom encodings)
- **Day 3 (Wed):** Practice: test framework against 2-3 different obfuscation schemes
- **Day 4 (Thu):** Practice: continue refining, add CLI arguments for usability
- **Day 5 (Fri):** Finalize string-decoder tool, write README + usage examples
- **Day 6 (Sat):** Weekly review: tool #4 complete, portfolio now has 4 tools
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 45 (Month 9-10) - Python Scripting for RE

- **Day 1 (Mon):** IOC extraction automation: script to pull URLs/IPs/hashes from strings output
- **Day 2 (Tue):** Practice: integrate IOC script with earlier PE-info tool
- **Day 3 (Wed):** Practice: test combined toolchain on a new sample end-to-end
- **Day 4 (Thu):** Practice: fix bugs, improve output formatting (JSON/CSV export)
- **Day 5 (Fri):** Documentation pass: write a single 'toolkit overview' README tying tools together
- **Day 6 (Sat):** Weekly review + portfolio structure cleanup
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 46 (Month 9-10) - Python Scripting for RE

- **Day 1 (Mon):** Intro to YARA: rule syntax, strings/condition sections
- **Day 2 (Tue):** Practice: write a YARA rule to detect a known crackme/sample pattern
- **Day 3 (Wed):** Practice: write YARA rule for a specific malware family indicator
- **Day 4 (Thu):** Practice: test rules against sample set, refine for false positives
- **Day 5 (Fri):** Practice: write 3-5 YARA rules total, document each with reasoning
- **Day 6 (Sat):** Weekly review: YARA rule set added to portfolio
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 47 (Month 9-10) - Python Scripting for RE

- **Day 1 (Mon):** Practice: automation script - batch process multiple samples through your toolkit
- **Day 2 (Tue):** Practice: continue batch automation, add error handling
- **Day 3 (Wed):** Practice: 1 CTF reversing challenge (TryHackMe / picoCTF / HTB - rotate platforms) applying automation mindset
- **Day 4 (Thu):** Practice: continue challenge / write-up
- **Day 5 (Fri):** Polish all Phase 2 scripting tools into one cohesive GitHub repo
- **Day 6 (Sat):** Weekly review: scripting portfolio finalized (toolkit + YARA rules)
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 48 (Month 9-10) - Python Scripting for RE

- **Day 1 (Mon):** Milestone project: full sample analysis using ONLY your own built toolkit
- **Day 2 (Tue):** Continue milestone project
- **Day 3 (Wed):** Write comprehensive report combining manual analysis + tool output
- **Day 4 (Thu):** Polish report into flagship portfolio write-up #2
- **Day 5 (Fri):** Self-assessment: which Phase 2 skills feel weak? Plan catch-up if needed
- **Day 6 (Sat):** PHASE 2 SCRIPTING COMPLETE - review week
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 49 (Month 10-11) - Sample Analysis + Write-ups + Portfolio

- **Day 1 (Mon):** Select 2 new safe samples for deep-dive analysis (different families than before)
- **Day 2 (Tue):** Practice: full static triage on sample A
- **Day 3 (Wed):** Practice: full dynamic analysis on sample A
- **Day 4 (Thu):** Practice: write detailed report on sample A (behavior, IOCs, MITRE mapping)
- **Day 5 (Fri):** Practice: full static triage on sample B
- **Day 6 (Sat):** Weekly review: sample A write-up finalized
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 50 (Month 10-11) - Sample Analysis + Write-ups + Portfolio

- **Day 1 (Mon):** Practice: full dynamic analysis on sample B
- **Day 2 (Tue):** Practice: write detailed report on sample B
- **Day 3 (Wed):** Practice: compare sample A and B - similarities/differences in technique
- **Day 4 (Thu):** Practice: 1 CTF reversing challenge (TryHackMe / picoCTF / HTB - rotate platforms) - alternate between TryHackMe and picoCTF/HTB (timed)
- **Day 5 (Fri):** Polish both write-ups for portfolio (this is 'malware analyst' proof-of-work)
- **Day 6 (Sat):** Weekly review: 2 more flagship write-ups added to portfolio
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 51 (Month 10-11) - Sample Analysis + Write-ups + Portfolio

- **Day 1 (Mon):** Resume draft #1: list all technical skills gained so far (C, asm, tools, samples analyzed)
- **Day 2 (Tue):** Practice: continue sample analysis routine with a new, harder sample
- **Day 3 (Wed):** Practice: continue, document as you go
- **Day 4 (Thu):** Practice: finish sample, write report
- **Day 5 (Fri):** Practice: 1 CTF challenge
- **Day 6 (Sat):** Weekly review: resume draft refined with concrete portfolio links
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 52 (Month 10-11) - Sample Analysis + Write-ups + Portfolio

- **Day 1 (Mon):** LinkedIn/GitHub profile polish: pin best repos, write clear profile summary for RE roles
- **Day 2 (Tue):** Practice: research 5 real job postings for 'Malware Analyst' / 'Reverse Engineer' roles, note common requirements
- **Day 3 (Wed):** Practice: gap-check - compare your skills to job requirements, list any gaps
- **Day 4 (Thu):** Practice: targeted study session filling the biggest identified gap
- **Day 5 (Fri):** Practice: continue gap-filling
- **Day 6 (Sat):** Weekly review: skills-to-job-requirements mapping doc created
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 53 (Month 10-11) - Sample Analysis + Write-ups + Portfolio

- **Day 1 (Mon):** Practice: 1 more sample analysis (consolidation, not new topics)
- **Day 2 (Tue):** Practice: continue + write-up
- **Day 3 (Wed):** Mock interview prep: write answers to 'walk me through how you analyze a new binary'
- **Day 4 (Thu):** Mock interview prep: practice explaining 2 portfolio write-ups out loud
- **Day 5 (Fri):** Practice: 1 CTF reversing challenge (TryHackMe / picoCTF / HTB - rotate platforms)
- **Day 6 (Sat):** PHASE 2 COMPLETE - full portfolio review (should have ~10+ write-ups, 4-5 tools, 5+ YARA rules)
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 54 (Month 11-12) - YARA Rule-Sets + Portfolio Polish

- **Day 1 (Mon):** Advanced YARA: performance considerations, rule organization for a rule-set
- **Day 2 (Tue):** Practice: build a small YARA rule-set for a hypothetical malware family (3-4 variants)
- **Day 3 (Wed):** Practice: test rule-set for false positives against clean files
- **Day 4 (Thu):** Practice: document rule-set with reasoning per rule
- **Day 5 (Fri):** Finalize YARA rule-set repo, add README explaining methodology
- **Day 6 (Sat):** Weekly review: YARA portfolio piece complete
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 55 (Month 11-12) - YARA Rule-Sets + Portfolio Polish

- **Day 1 (Mon):** Portfolio audit: read through every write-up as a stranger/recruiter would
- **Day 2 (Tue):** Practice: rewrite/clarify the 2 weakest write-ups
- **Day 3 (Wed):** Practice: ensure consistent formatting across all write-ups (headers, screenshots, code blocks)
- **Day 4 (Thu):** Practice: add a top-level portfolio README indexing everything by category
- **Day 5 (Fri):** Practice: 1 CTF reversing challenge (TryHackMe / picoCTF / HTB - rotate platforms)
- **Day 6 (Sat):** Weekly review: portfolio presentation finalized
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 56 (Month 11-12) - YARA Rule-Sets + Portfolio Polish

- **Day 1 (Mon):** Certifications check (optional): research if GREM/other certs are worth pursuing later
- **Day 2 (Tue):** Practice: 1 new sample or crackme, consolidation practice
- **Day 3 (Wed):** Practice: continue + write-up
- **Day 4 (Thu):** Practice: revisit weakest technical area from Phase 1 or 2, dedicated study session
- **Day 5 (Fri):** Practice: continue weak-area study
- **Day 6 (Sat):** Weekly review: readiness self-check before Phase 3
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 57 (Month 11-12) - YARA Rule-Sets + Portfolio Polish

- **Day 1 (Mon):** Networking: identify 5-10 people/companies in malware analysis space to follow (blogs, Twitter/X, conferences)
- **Day 2 (Tue):** Practice: read 1-2 real malware analysis blog write-ups from researchers, note techniques used
- **Day 3 (Wed):** Practice: try to replicate a technique from a blog post on a safe sample
- **Day 4 (Thu):** Practice: continue replication exercise
- **Day 5 (Fri):** Practice: 1 CTF reversing challenge (TryHackMe / picoCTF / HTB - rotate platforms)
- **Day 6 (Sat):** PHASE 2 FULLY COMPLETE - rest day, prepare for Phase 3 (exploitation + specialization)
- **Day 7 (Sun):** Rest / catch-up / light review

## PHASE 3: EXPLOITATION, SPECIALIZATION & JOB PREP

### Week 58 (Month 13) - Binary Exploitation Basics

- **Day 1 (Mon):** Binary exploitation intro: stack layout recap, why overflows matter
- **Day 2 (Tue):** Practice: trigger a simple stack buffer overflow in a deliberately vulnerable C program
- **Day 3 (Wed):** Practice: control EIP/RIP via crafted input (in a controlled lab binary)
- **Day 4 (Thu):** Concept: NX/DEP, ASLR, stack canaries - why modern exploitation is harder
- **Day 5 (Fri):** Practice: continue basic overflow exercise, document steps
- **Day 6 (Sat):** Weekly review: first overflow write-up drafted
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 59 (Month 13) - Binary Exploitation Basics

- **Day 1 (Mon):** Format string vulnerabilities: concept and simple exploitation
- **Day 2 (Tue):** Practice: exploit a format string bug in a lab binary (read memory)
- **Day 3 (Wed):** Practice: continue, attempt to write memory via format string bug
- **Day 4 (Thu):** Intro to ROP (Return-Oriented Programming): why it bypasses NX
- **Day 5 (Fri):** Practice: identify gadgets in a simple binary using a gadget-finder tool
- **Day 6 (Sat):** Weekly review: exploitation concepts notes consolidated
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 60 (Month 13) - Binary Exploitation Basics

- **Day 1 (Mon):** Practice: build a simple ROP chain for a lab binary (beginner-level challenge)
- **Day 2 (Tue):** Practice: continue ROP chain construction
- **Day 3 (Wed):** Practice: solve 1 beginner pwn room on TryHackMe (or pwnable.kr / HTB)
- **Day 4 (Thu):** Practice: continue pwn challenge
- **Day 5 (Fri):** Finish pwn challenge, write detailed write-up (exploitation portfolio piece #1)
- **Day 6 (Sat):** Weekly review: exploitation write-up polished
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 61 (Month 13) - Binary Exploitation Basics

- **Day 1 (Mon):** Practice: solve 2nd pwn/exploitation challenge
- **Day 2 (Tue):** Practice: continue 2nd challenge
- **Day 3 (Wed):** Practice: finish + write-up
- **Day 4 (Thu):** Practice: revisit and combine RE + exploitation skills on one challenge (reverse to find vuln, then exploit)
- **Day 5 (Fri):** Practice: continue combined challenge
- **Day 6 (Sat):** PHASE MILESTONE: exploitation basics quiz - self-test key concepts (NX, ASLR, ROP, canaries)
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 62 (Month 13-14) - CTF Practice (Speed + Breadth)

- **Day 1 (Mon):** Register on TryHackMe, picoCTF, HackTheBox, and crackmes.one if not already; pick reversing + pwn tracks on TryHackMe
- **Day 2 (Tue):** Practice: solve 2 easy reversing rooms on TryHackMe back-to-back (build speed)
- **Day 3 (Wed):** Practice: solve 1 medium TryHackMe reversing room
- **Day 4 (Thu):** Practice: solve 1 easy TryHackMe pwn/binary exploitation room
- **Day 5 (Fri):** Practice: continue / write-up for 1 solved challenge
- **Day 6 (Sat):** Weekly review: CTF write-ups added to portfolio (aim 2-3 this week)
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 63 (Month 13-14) - CTF Practice (Speed + Breadth)

- **Day 1 (Mon):** Practice: solve 2 more reversing rooms on TryHackMe (mixed difficulty)
- **Day 2 (Tue):** Practice: solve 1 malware-analysis room on TryHackMe (e.g. MAL series)
- **Day 3 (Wed):** Practice: timed challenge - solve something new in under 60 minutes
- **Day 4 (Thu):** Practice: continue / write-up
- **Day 5 (Fri):** Practice: 1 harder TryHackMe reversing room (stretch goal)
- **Day 6 (Sat):** Weekly review: CTF portfolio section updated, note personal best solve times
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 64 (Month 14) - Specialization Deep-Dive (Capstone Project)

- **Day 1 (Mon):** Choose specialization theme: e.g. ransomware analysis, loader/unpacker research, or web-malware analysis
- **Day 2 (Tue):** Practice: research the theme - read 2-3 existing analyses/articles on the topic
- **Day 3 (Wed):** Practice: source or construct a safe sample/scenario matching the theme
- **Day 4 (Thu):** Practice: begin deep-dive analysis on chosen theme
- **Day 5 (Fri):** Practice: continue deep-dive analysis
- **Day 6 (Sat):** Weekly review: specialization project scoped and underway
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 65 (Month 14) - Specialization Deep-Dive (Capstone Project)

- **Day 1 (Mon):** Practice: continue specialization deep-dive (core analysis work)
- **Day 2 (Tue):** Practice: continue, start drafting technical write-up alongside analysis
- **Day 3 (Wed):** Practice: finish core analysis, refine findings
- **Day 4 (Thu):** Practice: write comprehensive specialization report (this is your flagship capstone piece)
- **Day 5 (Fri):** Practice: add diagrams/visuals to capstone report if helpful (behavior flow, IOC summary)
- **Day 6 (Sat):** Weekly review: capstone draft complete
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 66 (Month 14) - Specialization Deep-Dive (Capstone Project)

- **Day 1 (Mon):** Practice: peer-review capstone report (self-critique or ask a mentor/community to review)
- **Day 2 (Tue):** Practice: revise capstone based on review
- **Day 3 (Wed):** Practice: finalize capstone, publish to GitHub/blog
- **Day 4 (Thu):** Practice: write a short LinkedIn/blog post summarizing capstone project
- **Day 5 (Fri):** Practice: 1 CTF challenge (maintain sharpness)
- **Day 6 (Sat):** Weekly review: capstone project fully published, portfolio essentially complete
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 67 (Month 15) - Job Prep + Applications + Interview Practice

- **Day 1 (Mon):** Resume finalize: tailor specifically for Reverse Engineer / Malware Analyst roles
- **Day 2 (Tue):** Practice: research and shortlist 15-20 target job postings (RE-central roles + SOC-as-stepping-stone roles)
- **Day 3 (Wed):** Practice: tailor resume/cover letter per application batch, start applying (5 today)
- **Day 4 (Thu):** Practice: continue applications (5 more), track in a spreadsheet
- **Day 5 (Fri):** Mock interview: technical - explain your capstone project out loud, time yourself
- **Day 6 (Sat):** Weekly review: applications sent, mock interview #1 done
- **Day 7 (Sun):** Rest / catch-up / light review

### Week 68 (Month 15) - Job Prep + Applications + Interview Practice

- **Day 1 (Mon):** Mock interview: be ready to whiteboard/explain a crackme solve from memory
- **Day 2 (Tue):** Practice: review common RE/malware interview questions (assembly reading, WinAPI, MITRE ATT&CK basics)
- **Day 3 (Wed):** Practice: continue applications (5 more)
- **Day 4 (Thu):** Mock interview: SOC-analyst-style questions in case pursuing stepping-stone path
- **Day 5 (Fri):** Practice: continue applications, follow up on earlier ones
- **Day 6 (Sat):** FINAL REVIEW: full skills + portfolio checklist against original goal - ready for interviews
- **Day 7 (Sun):** Rest / catch-up / light review


## TryHackMe Room/Path Map (Use Alongside the Weekly Plan)

TryHackMe rooms are slotted into the weekly CTF-practice days above. Use this as your reference list so you're not hunting for rooms mid-study session. Order roughly matches the phase you'll be in.

**Phase 1 (Weeks 1-28 — Foundations):**
- Pre Security path (skip if already comfortable, otherwise use as quick refresher)
- Intro to x86-64 Assembly
- Ghidra room, Reverse Engineering (RE101)
- Basic Reversing rooms in the "Crack The Code" / "Reversing ELF" style rooms

**Phase 2 (Weeks 29-53 — Malware-Oriented RE):**
- Windows Internals
- Intro to Malware Analysis, Dissecting PE Headers
- MAL: Malware Introductory series (MAL1, MAL2 progression)
- YARA room
- MITRE ATT&CK room (for mapping findings correctly)

**Phase 3 (Weeks 54-68 — Exploitation + CTF + Job Prep):**
- Buffer Overflow Prep, Buffer Overflows path
- Gatekeeper, Brainpan (classic beginner pwn boxes)
- Binary Exploitation Basics path
- Any live TryHackMe seasonal CTF events (e.g. Advent of Cyber has some binary/forensics challenges) — join these live when they run, they're timed and closer to real competition pressure

**How to mix it in:** Whenever a day says "CTF reversing challenge," pick from whichever platform has fresh content for your current skill level — TryHackMe rooms are more guided (good when learning something new), picoCTF/HTB are less guided (good for testing if you actually learned it). Alternate rather than picking one exclusively.

---
## Notes
- All malware samples must be handled ONLY in isolated, snapshot-based lab VMs with no host network/shared folders.
- Use only educational/research sample sources (theZoo, MalwareBazaar) - never run unknown files on your main machine.
- If a week's topic takes longer than planned, use the Sunday buffer or slightly extend - don't rush core understanding just to stay on schedule.
- Revisit the skills-to-job-requirements gap check (Week 45) periodically as you get closer to applying.
---

## PHASE 4: PATH TO SENIOR-LEVEL RE (Post-Job, Ongoing Growth)

**Reality check first:** Nobody goes from student to "senior reverse engineer" via a schedule. Seniority comes from years of handling real, messy, high-stakes binaries under time pressure, learning from people better than you, and slowly building judgment that no course teaches. Phase 1–3 above make you **hireable as a junior**. This phase is the map for what to keep building *after* you're in the job, so you know what "senior" actually looks like and aren't caught off guard by the gap.

**Format:** Quarterly themes, not daily tasks — because once you're working full-time, your job itself becomes your biggest teacher. Treat this as 5–8 hrs/week of deliberate growth on top of your day job, for roughly Years 1–3.

### Year 1 (post-hire): Depth over breadth
- **Q1:** Master IDA Pro or Binary Ninja properly (not just Ghidra) — scripting with IDAPython/Binja API, custom loaders, plugin writing
- **Q2:** Advanced obfuscation and packers: VMProtect/Themida-style virtualization-based protection, control-flow flattening, how to approach (not necessarily fully defeat) commercial protectors
- **Q3:** Anti-analysis mastery: advanced anti-debug (timing checks, exception-based tricks), anti-VM/sandbox evasion detection and bypass, techniques malware uses against automated sandboxes
- **Q4:** Deep dive into one malware family end-to-end over months (not days) — track it across variants, understand its evolution, publish a serious write-up or internal report

### Year 2: Systems depth + specialization
- **Q1:** Kernel-mode analysis: drivers, rootkits, how kernel-level malware/EDR-evasion works; basic Windows kernel debugging (WinDbg + kernel debugging setup)
- **Q2:** Firmware & embedded RE: bootloaders, UEFI/BIOS analysis basics, IoT firmware extraction and analysis (binwalk, JTAG concepts)
- **Q3:** Advanced binary exploitation: heap exploitation (use-after-free, heap grooming), kernel exploitation basics, browser exploitation concepts
- **Q4:** Symbolic execution & automated analysis: learn angr or Triton, understand when automation helps vs. when manual RE is still needed; intro to fuzzing (AFL++/honggfuzz) for vulnerability discovery

### Year 3: Toward mobile/cross-platform + industry visibility
- **Q1:** Mobile RE: Android APK reversing (Jadx, Frida for dynamic instrumentation), native library (.so) analysis
- **Q2:** iOS RE basics (if relevant to your track): IPA structure, jailbreak-based dynamic analysis concepts
- **Q3:** Threat intelligence integration: APT campaign tracking, attribution reasoning, how RE findings feed into broader threat intel reports
- **Q4:** Public visibility: aim for 1 conference talk submission (local BSides, DEF CON village CFP) or a well-regarded technical blog post; start mentoring newer analysts on your team

### What "senior" actually means by then
- You can pick up an unfamiliar, actively-evolving threat and produce a usable report under real deadline pressure, with minimal guidance
- You've built or contributed to at least one internal or open-source RE tool that other analysts rely on
- Junior analysts come to you with questions, and you can explain *why*, not just *what*
- You have judgment about when deep manual RE is worth it vs. when to lean on automation/existing signatures

### How to actually keep this going
- Don't try to do all of this — **pick what your job exposes you to first**, and go deep there. If your team does a lot of Windows malware, prioritize Year 1–2 Windows/kernel content. If you land somewhere doing mobile app security, shift the mobile RE content earlier.
- Revisit this section every 6 months and re-prioritize based on what your actual work demands — that's genuinely how seniority gets built, not by following someone else's fixed roadmap.

---

## A Straight Answer on "Any Company, Any Competition"

You asked for this plan to get you to a level that can compete for **any** company or **any** competition. I want to be honest with you rather than just agree, because it changes how you should read this document:

**On companies:** This plan gets you to genuine junior-RE/malware-analyst hireable level — real skills, real portfolio, real proof-of-work. That's enough for most junior RE/malware roles at mid-size security vendors, MSSPs, SOC-to-RE pipelines, and many product security teams. It is **not** enough, by itself, to guarantee an offer at the handful of top-tier places (top AV/EDR vendors' research teams, elite threat-intel firms, offensive research teams at big tech) — those often want CTF competition history, published CVEs, or referrals on top of the fundamentals. Phase 4 (senior track) is the map for closing that gap, but it takes years, not months.

**On competitions:** Solving TryHackMe/picoCTF/HTB rooms builds real skill, but "winning" named competitions (DEF CON CTF quals, top-20 on picoCTF finals, etc.) is a different game — it's about speed under pressure and often team play. If that's a real goal (not just a figure of speech), the honest next step is joining an active CTF team early and competing live, regularly, not just solving practice rooms solo. Worth deciding if that's actually a goal you want to add, since it changes how you'd spend Phase 3.

Nothing here is meant to discourage you — the plan as built is genuinely strong and will put you ahead of most junior candidates. I'd rather you know exactly what it does and doesn't guarantee than chase "any company, any competition" as a literal target and feel like you fell short of something that was never precisely defined.