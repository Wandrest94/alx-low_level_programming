<<<<<<< HEAD
global   main
	  extern    printf
=======
global    main
          extern    printf
>>>>>>> d83947fbd16b1b3b32144c599f13aaa4d3d8ce2e
main:
	  mov   edi, format
	  xor   eax, eax
	  call  printf
<<<<<<< HEAD
	  mov   eax, 0
=======
	  mov 	eax, 0
>>>>>>> d83947fbd16b1b3b32144c599f13aaa4d3d8ce2e
	  ret
format: db `Hello, Holberton\n`,0
