;********************************************************
;*														*
;*	file name	: definition of M16C/62's SFR			*
;*														*
;*	Copyright	: MITSUBISHI ELECTRIC CORPORATION		*
;*														*
;*	Version		: 1.00 ( 1997- 6- 9 )					*
;*														*
;********************************************************
;
;  note:
;	This data is a freeware that SFR for M16C/61 is discribeed.
;	Mitsubishi Electric Corporation assumes no responsibility for any damage
;	that occurred by this data.
;
;-------------------------------------------------------
;	Processor mode register 0
;-------------------------------------------------------
pm0			.equ		0004h
;
pm00		.btequ		0,pm0		; Processor mode bit
pm01		.btequ		1,pm0		; Processor mode bit
pm02		.btequ		2,pm0		; R/W mode select bit
pm03		.btequ		3,pm0		; Software reset bit
pm04		.btequ		4,pm0		; Multiplexed bus space select bit
pm05		.btequ		5,pm0		; Multiplexed bus space select bit
pm06		.btequ		6,pm0		; Port P40 to P43 function select bit
pm07		.btequ		7,pm0		; BCLK output disable bit
;
;-------------------------------------------------------
;	Processor mode register 1
;-------------------------------------------------------
pm1			.equ		0005h
;
pm14		.btequ		4,pm1		;
pm15		.btequ		5,pm1		;
pm16		.btequ		6,pm1		; ROM expansion space invalid bit
pm17		.btequ		7,pm1		; Wait bit
;
;-------------------------------------------------------
;	System clock control register 0
;-------------------------------------------------------
cm0			.equ		0006h
;
cm00		.btequ		0,cm0		; Clock output function select bit
cm01		.btequ		1,cm0		; Clock output function select bit
cm02		.btequ		2,cm0		; WAIT peripheral function Clock stop bit
cm03		.btequ		3,cm0		; Xcin-Xcout drive capacity select bit
cm04		.btequ		4,cm0		; Port Xc select bit
cm05		.btequ		5,cm0		; Main Clock stop bit
cm06		.btequ		6,cm0		; Main Clock division selectbit0
cm07		.btequ		7,cm0		; System clock select bit
;
;-------------------------------------------------------
;	System clock control register 1
;-------------------------------------------------------
cm1			.equ		0007h
;
cm10		.btequ		0,cm1		; All clock stop control bit
cm15		.btequ		5,cm1		; Xin-Xout drive capacity select bit
cm16		.btequ		6,cm1		; Main Clock division select bit
cm17		.btequ		7,cm1		; Main Clock division select bit
;
;-------------------------------------------------------
;	Chip select control register
;-------------------------------------------------------
csr			.equ		0008h
;
cs0			.btequ		0,csr		; CS0 output enable bit
cs1			.btequ		1,csr		; CS1 output enable bit
cs2			.btequ		2,csr		; CS2 output enable bit
cs3			.btequ		3,csr		; CS3 output enable bit
cs0w		.btequ		4,csr		; CS0 wait bit
cs1w		.btequ		5,csr		; CS1 wait bit
cs2w		.btequ		6,csr		; CS2 wait bit
cs3w		.btequ		7,csr		; CS3 wait bit
;
;-------------------------------------------------------
;	Address match interrupt enable register
;-------------------------------------------------------
aier		.equ		0009h
;
aier0		.btequ		0,aier		; Address match interrupt 0 enable bit
aier1		.btequ		1,aier		; Address match interrupt 1 enable bit
;
;-------------------------------------------------------
;	Protect register
;-------------------------------------------------------
prcr		.equ		000ah
;
prc0		.btequ		0,prcr		; Enable writting to system clock control register
prc1		.btequ		1,prcr		; Enable writting to processor mode register
prc2		.btequ		2,prcr		; Enable writting to port P9 direction register
;
;-------------------------------------------------------
;	Data bank register
;-------------------------------------------------------
dbr			.equ		000bh
;
ofs			.btequ		2,dbr
bsr0		.btequ		3,dbr
bsr1		.btequ		4,dbr
bsr2		.btequ		5,dbr
;
;-------------------------------------------------------
;	Watchdog timer
;-------------------------------------------------------
wdts		.equ		000eh		; Watchdog timer start register
;
wdc			.equ		000fh		; Watchdog timer control register
;
wdc7		.btequ		7,wdc		; Prescaler select bit
;
;-------------------------------------------------------
;	Address match interrupt register 0
;-------------------------------------------------------
rmad0		.equ		0010h
rmad0l		.equ		rmad0		; Address match interrupt register 0L
rmad0m		.equ		rmad0+1		; Address match interrupt register 0M
rmad0h		.equ		rmad0+2		; Address match interrupt register 0H
;
;-------------------------------------------------------
;	Address match interrupt register 1
;-------------------------------------------------------
rmad1		.equ		0014h
rmad1l		.equ		rmad1		; Address match interrupt register 1L
rmad1m		.equ		rmad1+1		; Address match interrupt register 1M
rmad1h		.equ		rmad1+2		; Address match interrupt register 1H
;
;-------------------------------------------------------
;	DMA0 source pointer
;-------------------------------------------------------
sar0		.equ		0020h
sar0l		.equ		sar0		; DMA0 source pointer L
sar0m		.equ		sar0+1		; DMA0 source pointer M
sar0h		.equ		sar0+2		; DMA0 source pointer H
;
;-------------------------------------------------------
;	DMA0 destination pointer
;-------------------------------------------------------
dar0		.equ		0024h
dar0l		.equ		dar0		; DMA0 destination pointer L
dar0m		.equ		dar0+1		; DMA0 destination pointer M
dar0h		.equ		dar0+2		; DMA0 destination pointer H
;
;-------------------------------------------------------
;	DMA0 transfer counter
;-------------------------------------------------------
tcr0		.equ		0028h
tcr0l		.equ		tcr0		; DMA0 transfer counter L
tcr0h		.equ		tcr0+1		; DMA0 transfer counter H
;
;-------------------------------------------------------
;	DMA0 control register
;-------------------------------------------------------
dm0con		.equ		002ch
;
dmbit_dm0con	.btequ	0,dm0con	; Transfer unit bit select bit
dmasl_dm0con	.btequ	1,dm0con	; Repeat transfer mode select bit
dmas_dm0con	.btequ		2,dm0con	; DMA request bit
dmae_dm0con	.btequ		3,dm0con	; DMA enable bit
dsd_dm0con	.btequ		4,dm0con	; Source address direction select bit
dad_dm0con	.btequ		5,dm0con	; Destination address direction select bit
;
;-------------------------------------------------------
;	DMA1 source pointer
;-------------------------------------------------------
sar1		.equ		0030h
sar1l		.equ		sar1		; DMA1 source pointer L
sar1m		.equ		sar1+1		; DMA1 source pointer M
sar1h		.equ		sar1+2		; DMA1 source pointer H
;
;-------------------------------------------------------
;	DMA1 destination pointer
;-------------------------------------------------------
dar1		.equ		0034h
dar1l		.equ		dar1		; DMA1 destination pointer L
dar1m		.equ		dar1+1		; DMA1 destination pointer M
dar1h		.equ		dar1+2		; DMA1 destination pointer H
;
;-------------------------------------------------------
;	DMA1 transfer counter
;-------------------------------------------------------
tcr1		.equ		0038h
tcr1l		.equ		tcr1		;DMA1 transfer counter L
tcr1h		.equ		tcr1+1		;DMA1 transfer counter H
;
;-------------------------------------------------------
;	DMA1 control register
;-------------------------------------------------------
dm1con		.equ		003ch
;
dmbit_dm1con	.btequ	0,dm1con	; Transfer unit bit select bit
dmasl_dm1con	.btequ	1,dm1con	; Repeat transfer mode select bit
dmas_dm1con	.btequ		2,dm1con	; DMA request bit
dmae_dm1con	.btequ		3,dm1con	; DMA disable bit
dsd_dm1con	.btequ		4,dm1con	; Source address direction select bit
dad_dm1con	.btequ		5,dm1con	; Destination address direction select bit
;
;-------------------------------------------------------
;	Interrupt control register
;-------------------------------------------------------
int3ic			.equ	0044h		; INT3
ilvl0_int3ic	.btequ	0,int3ic	; Interrupt priority level select bit
ilvl1_int3ic	.btequ	1,int3ic	;
ilvl2_int3ic	.btequ	2,int3ic	;
ir_int3ic		.btequ	3,int3ic	; Interrupt request bit
pol_int3ic		.btequ	4,int3ic	; Polarity select bit
;
tb5ic			.equ	0045h		; TimerB5
ilvl0_tb5ic		.btequ	0,tb5ic		; Interrupt priority level select bit
ilvl1_tb5ic		.btequ	1,tb5ic		;
ilvl2_tb5ic		.btequ	2,tb5ic		;
ir_tb5ic		.btequ	3,tb5ic		; Interrupt request bit
;
tb4ic			.equ	0046h		; TimerB4
ilvl0_tb4ic		.btequ	0,tb4ic		; Interrupt priority level select bit
ilvl1_tb4ic		.btequ	1,tb4ic		;
ilvl2_tb4ic		.btequ	2,tb4ic		;
ir_tb4ic		.btequ	3,tb4ic		; Interrupt request bit
;
tb3ic			.equ	0047h		; TimerB3
ilvl0_tb3ic		.btequ	0,tb3ic		; Interrupt priority level select bit
ilvl1_tb3ic		.btequ	1,tb3ic		;
ilvl2_tb3ic		.btequ	2,tb3ic		;
ir_tb3ic		.btequ	3,tb3ic		; Interrupt request bit
;
s4ic			.equ	0048h		; SI/O4
ilvl0_s4ic		.btequ	0,s4ic		; Interrupt priority level select bit
ilvl1_s4ic		.btequ	1,s4ic		;
ilvl2_s4ic		.btequ	2,s4ic		;
ir_s4ic			.btequ	3,s4ic		; Interrupt request bit
pol_s4ic		.btequ	4,s4ic		; Polarity select bit
;
s3ic			.equ	0049h		; SI/O3
ilvl0_s3ic		.btequ	0,s3ic		; Interrupt priority level select bit
ilvl1_s3ic		.btequ	1,s3ic		;
ilvl2_s3ic		.btequ	2,s3ic		;
ir_s3ic			.btequ	3,s3ic		; Interrupt request bit
pol_s3ic		.btequ	4,s3ic		; Polarity select bit
;
int5ic			.equ	0048h		; INT5
ilvl0_int5ic	.btequ	0,int5ic	; Interrupt priority level select bit
ilvl1_int5ic	.btequ	1,int5ic	;
ilvl2_int5ic	.btequ	2,int5ic	;
ir_int5ic		.btequ	3,int5ic	; Interrupt request bit
pol_int5ic		.btequ	4,int5ic	; Polarity select bit
;
int4ic			.equ	0049h		; INT4
ilvl0_int4ic	.btequ	0,int4ic	; Interrupt priority level select bit
ilvl1_int4ic	.btequ	1,int4ic	;
ilvl2_int4ic	.btequ	2,int4ic	;
ir_int4ic		.btequ	3,int4ic	; Interrupt request bit
pol_int4ic		.btequ	4,int4ic	; Polarity select bit
;
bcnic			.equ	004ah		; Bus collision detection interrupt control register
ilvl0_bcnic		.btequ	0,bcnic		; Interrupt priority level select bit
ilvl1_bcnic		.btequ	1,bcnic		;
ilvl2_bcnic		.btequ	2,bcnic		;
ir_bcnic		.btequ	3,bcnic		; Interrupt request bit
;
dm0ic			.equ	004bh		; DMA0 interrupt control register
ilvl0_dm0ic		.btequ	0,dm0ic		; Interrupt priority level select bit
ilvl1_dm0ic		.btequ	1,dm0ic		;
ilvl2_dm0ic		.btequ	2,dm0ic		;
ir_dm0ic		.btequ	3,dm0ic		; Interrupt request bit
;
dm1ic			.equ	004ch		; DMA1 interrupt control register
ilvl0_dm1ic		.btequ	0,dm1ic		; Interrupt priority level select bit
ilvl1_dm1ic		.btequ	1,dm1ic		;
ilvl2_dm1ic		.btequ	2,dm1ic		;
ir_dm1ic		.btequ	3,dm1ic		; Interrupt request bit
;
kupic			.equ	004dh		; Key input interrupt control register
ilvl0_kupic		.btequ	0,kupic		; Interrupt priority level select bit
ilvl1_kupic		.btequ	1,kupic		;
ilvl2_kupic		.btequ	2,kupic		;
ir_kupic		.btequ	3,kupic		; Interrupt request bit
;
adic			.equ	004eh		; A-D interrupt control register
ilvl0_adic		.btequ	0,adic		; Interrupt priority level select bit
ilvl1_adic		.btequ	1,adic		;
ilvl2_adic		.btequ	2,adic		;
ir_adic			.btequ	3,adic		; Interrupt request bit
;
s2tic			.equ	004fh		; UART2 transmit interrupt control register
ilvl0_s2tic		.btequ	0,s2tic		; Interrupt priority level select bit
ilvl1_s2tic		.btequ	1,s2tic		;
ilvl2_s2tic		.btequ	2,s2tic		;
ir_s2tic		.btequ	3,s2tic		; Interrupt request bit
;
s2ric			.equ	0050h		; UART2 receive interrupt control register
ilvl0_s2ric		.btequ	0,s2ric		; Interrupt priority level select bit
ilvl1_s2ric		.btequ	1,s2ric		;
ilvl2_s2ric		.btequ	2,s2ric		;
ir_s2ric		.btequ	3,s2ric		; Interrupt request bit
;
s0tic			.equ	0051h		; UART0 transmit interrupt control register
ilvl0_s0tic		.btequ	0,s0tic		; Interrupt priority level select bit
ilvl1_s0tic		.btequ	1,s0tic		;
ilvl2_s0tic		.btequ	2,s0tic		;
ir_s0tic		.btequ	3,s0tic		; Interrupt request bit
;
s0ric			.equ	0052h		; UART0 receive interrupt control register
ilvl0_s0ric		.btequ	0,s0ric		; Interrupt priority level select bit
ilvl1_s0ric		.btequ	1,s0ric		;
ilvl2_s0ric		.btequ	2,s0ric		;
ir_s0ric		.btequ	3,s0ric		; Interrupt request bit
;
s1tic			.equ	0053h		; UART1 transmit interrupt control register
ilvl0_s1tic		.btequ	0,s1tic		; Interrupt priority level select bit
ilvl1_s1tic		.btequ	1,s1tic		;
ilvl2_s1tic		.btequ	2,s1tic		;
ir_s1tic		.btequ	3,s1tic		; Interrupt request bit
;
s1ric			.equ	0054h		; UART1 receive interrupt control register
ilvl0_s1ric		.btequ	0,s1ric		; Interrupt priority level select bit
ilvl1_s1ric		.btequ	1,s1ric		;
ilvl2_s1ric		.btequ	2,s1ric		;
ir_s1ric		.btequ	3,s1ric		; Interrupt request bit
;
ta0ic			.equ	0055h		; Timer A0
ilvl0_ta0ic		.btequ	0,ta0ic		; Interrupt priority level select bit
ilvl1_ta0ic		.btequ	1,ta0ic		;
ilvl2_ta0ic		.btequ	2,ta0ic		;
ir_ta0ic		.btequ	3,ta0ic		; Interrupt request bit
;
ta1ic			.equ	0056h		; Timer A1
ilvl0_ta1ic		.btequ	0,ta1ic		; Interrupt priority level select bit
ilvl1_ta1ic		.btequ	1,ta1ic		;
ilvl2_ta1ic		.btequ	2,ta1ic		;
ir_ta1ic		.btequ	3,ta1ic		; Interrupt request bit
;
ta2ic			.equ	0057h		; Timer A2
ilvl0_ta2ic		.btequ	0,ta2ic		; Interrupt priority level select bit
ilvl1_ta2ic		.btequ	1,ta2ic		;
ilvl2_ta2ic		.btequ	2,ta2ic		;
ir_ta2ic		.btequ	3,ta2ic		; Interrupt request bit
;
ta3ic			.equ	0058h		; Timer A3
ilvl0_ta3ic		.btequ	0,ta3ic		; Interrupt priority level select bit
ilvl1_ta3ic		.btequ	1,ta3ic		;
ilvl2_ta3ic		.btequ	2,ta3ic		;
ir_ta3ic		.btequ	3,ta3ic		; Interrupt request bit
;
ta4ic			.equ	0059h		; Timer A4
ilvl0_ta4ic		.btequ	0,ta4ic		; Interrupt priority level select bit
ilvl1_ta4ic		.btequ	1,ta4ic		;
ilvl2_ta4ic		.btequ	2,ta4ic		;
ir_ta4ic		.btequ	3,ta4ic		; Interrupt request bit
;
tb0ic			.equ	005ah		; Timer B0
ilvl0_tb0ic		.btequ	0,tb0ic		; Interrupt priority level select bit
ilvl1_tb0ic		.btequ	1,tb0ic		;
ilvl2_tb0ic		.btequ	2,tb0ic		;
ir_tb0ic		.btequ	3,tb0ic		; Interrupt request bit
;
tb1ic			.equ	005bh		; Timer B1
ilvl0_tb1ic		.btequ	0,tb1ic		; Interrupt priority level select bit
ilvl1_tb1ic		.btequ	1,tb1ic		;
ilvl2_tb1ic		.btequ	2,tb1ic		;
ir_tb1ic		.btequ	3,tb1ic		; Interrupt request bit
;
tb2ic			.equ	005ch		; Timer B2
ilvl0_tb2ic		.btequ	0,tb2ic		; Interrupt priority level select bit
ilvl1_tb2ic		.btequ	1,tb2ic		;
ilvl2_tb2ic		.btequ	2,tb2ic		;
ir_tb2ic		.btequ	3,tb2ic		; Interrupt request bit
;
int0ic			.equ	005dh		; INT0
ilvl0_int0ic	.btequ	0,int0ic	; Interrupt priority level select bit
ilvl1_int0ic	.btequ	1,int0ic	;
ilvl2_int0ic	.btequ	2,int0ic	;
ir_int0ic		.btequ	3,int0ic	; Interrupt request bit
pol_int0ic		.btequ	4,int0ic	; Polarity select bit
;
int1ic			.equ	005eh		; INT1
ilvl0_int1ic	.btequ	0,int1ic	; Interrupt priority level select bit
ilvl1_int1ic	.btequ	1,int1ic	;
ilvl2_int1ic	.btequ	2,int1ic	;
ir_int1ic		.btequ	3,int1ic	; Interrupt request bit
pol_int1ic		.btequ	4,int1ic	; Polarity select bit
;
int2ic			.equ	005fh		; INT2
ilvl0_int2ic	.btequ	0,int2ic	; Interrupt priority level select bit
ilvl1_int2ic	.btequ	1,int2ic	;
ilvl2_int2ic	.btequ	2,int2ic	;
ir_int2ic		.btequ	3,int2ic	; Interrupt request bit
pol_int2ic		.btequ	4,int2ic	; Polarity select bit
;
;-------------------------------------------------------
;	additional timer B3,B4,B5
;-------------------------------------------------------
tbsr		.equ		0340h
tb3s		.btequ		5,tbsr
tb4s		.btequ		6,tbsr
tb5s		.btequ		7,tbsr
;
ta11		.equ		0342h
ta11l		.equ		ta11
ta11h		.equ		ta11+1
;
ta21		.equ		0344h
ta21l		.equ		ta21
ta21h		.equ		ta21+1
;
ta41		.equ		0346h
ta41l		.equ		ta41
ta41h		.equ		ta41+1
;
invc0		.equ		0348h
inv00		.btequ		0,invc0
inv01		.btequ		1,invc0
inv02		.btequ		2,invc0
inv03		.btequ		3,invc0
inv04		.btequ		4,invc0
inv05		.btequ		5,invc0
inv06		.btequ		6,invc0
inv07		.btequ		7,invc0
;
invc1		.equ		0349h
inv10		.btequ		0,invc1
inv11		.btequ		1,invc1
inv12		.btequ		2,invc1
;
idb0		.equ		034ah
du0			.btequ		0,idb0
dub0		.btequ		1,idb0
dv0			.btequ		2,idb0
dvb0		.btequ		3,idb0
dw0			.btequ		4,idb0
dwb0		.btequ		5,idb0
;
idb1		.equ		034bh
du1			.btequ		0,idb0
dub1		.btequ		1,idb1
dv1			.btequ		2,idb1
dvb1		.btequ		3,idb1
dw1			.btequ		4,idb1
dwb1		.btequ		5,idb1
;
dtt			.equ		034ch
;
ictb2		.equ		034dh
;
tb3			.equ		0350h
tb3l		.equ		tb3
tb3h		.equ		tb3+1
;
tb4			.equ		0352h
tb4l		.equ		tb4
tb4h		.equ		tb4+1
;
tb5			.equ		0354h
tb5l		.equ		tb5
tb5h		.equ		tb5+1
;
tb3mr		.equ		035bh
tmod0_tb3mr	.btequ		0,tb3mr		; Operation mode select bit
tmod1_tb3mr	.btequ		1,tb3mr		;
mr0_tb3mr	.btequ		2,tb3mr		;
mr1_tb3mr	.btequ		3,tb3mr		;
mr2_tb3mr	.btequ		4,tb3mr		;
mr3_tb3mr	.btequ		5,tb3mr		;
tck0_tb3mr	.btequ		6,tb3mr		; Count source select bit
tck1_tb3mr	.btequ		7,tb3mr		;
;
tb4mr		.equ		035ch
tmod0_tb4mr	.btequ		0,tb4mr		; Operation mode select bit
tmod1_tb4mr	.btequ		1,tb4mr		;
mr0_tb4mr	.btequ		2,tb4mr		;
mr1_tb4mr	.btequ		3,tb4mr		;
mr2_tb4mr	.btequ		4,tb4mr		;
mr3_tb4mr	.btequ		5,tb4mr		;
tck0_tb4mr	.btequ		6,tb4mr		; Count source select bit
tck1_tb4mr	.btequ		7,tb4mr		;
;
tb5mr		.equ		035dh
tmod0_tb5mr	.btequ		0,tb5mr		; Operation mode select bit
tmod1_tb5mr	.btequ		1,tb5mr		;
mr0_tb5mr	.btequ		2,tb5mr		;
mr1_tb5mr	.btequ		3,tb5mr		;
mr2_tb5mr	.btequ		4,tb5mr		;
mr3_tb5mr	.btequ		5,tb5mr		;
tck0_tb5mr	.btequ		6,tb5mr		; Count source select bit
tck1_tb5mr	.btequ		7,tb5mr		;
;
;-------------------------------------------------------
;	Interrupt request cause select register
;-------------------------------------------------------
ifsr		.equ		035fh
ifsr0		.btequ		0,ifsr
ifsr1		.btequ		1,ifsr
ifsr2		.btequ		2,ifsr
ifsr3		.btequ		3,ifsr
ifsr4		.btequ		4,ifsr
ifsr5		.btequ		5,ifsr
ifsr6		.btequ		6,ifsr
ifsr7		.btequ		7,ifsr
;
;-------------------------------------------------------
;	SI/O 3
;-------------------------------------------------------
s3trr		.equ		0360h
s3trrl		.equ		s3trr
s3trrh		.equ		s3trr+1
;
s3c			.equ		0362h
sm30		.btequ		0,s3c
sm31		.btequ		1,s3c
sm32		.btequ		2,s3c
sm33		.btequ		3,s3c
sm35		.btequ		5,s3c
sm36		.btequ		6,s3c
sm37		.btequ		7,s3c
;
s3brg		.equ		0363h
;
;-------------------------------------------------------
;	SI/O 4
;-------------------------------------------------------
s4trr		.equ		0364h
s4trrl		.equ		s4trr
s4trrh		.equ		s4trr+1
;
s4c			.equ		0366h
sm40		.btequ		0,s4c
sm41		.btequ		1,s4c
sm42		.btequ		2,s4c
sm43		.btequ		3,s4c
sm45		.btequ		5,s4c
sm46		.btequ		6,s4c
sm47		.btequ		7,s4c
;
s4brg		.equ		0367h
;
;-------------------------------------------------------
;	UART2
;-------------------------------------------------------
u2smr		.equ		0377h
icm0_u2smr	.btequ		0,u2smr
abc_u2smr	.btequ		1,u2smr
bbs_u2smr	.btequ		2,u2smr
lsyn_u2smr	.btequ		3,u2smr
abscs_u2smr	.btequ		4,u2smr
acse_u2smr	.btequ		5,u2smr
sss_u2smr	.btequ		6,u2smr
;
u2mr		.equ		0378h		; UART2 transmit/receive mode register
smd0_u2mr	.btequ		0,u2mr		; Serial I/O mode select bit
smd1_u2mr	.btequ		1,u2mr		;
smd2_u2mr	.btequ		2,u2mr		;
ckdir_u2mr	.btequ		3,u2mr		; Internal/external Clock select bit
stps_u2mr	.btequ		4,u2mr		; Stop bit length selectbit
pry_u2mr	.btequ		5,u2mr		; Odd/even parity select bit
prye_u2mr	.btequ		6,u2mr		; Parity enable bit
iopol_u2mr	.btequ		7,u2mr		; TxD,RxD I/O polarity reverse bit
;
u2brg		.equ		0379h		; UART2 bit rate generator
;
u2tb		.equ		037ah		; UART2 transmit buffer register
u2tbl		.equ		u2tb		; 		Low
u2tbh		.equ		u2tb+1		;		High
;
u2c0		.equ		037ch		; UART2 transmit/receive control register 0
clk0_u2c0	.btequ		0,u2c0		; BRG count source select bit
clk1_u2c0	.btequ		1,u2c0		;
crs_u2c0	.btequ		2,u2c0		; CTS/RTS function select bit
txept_u2c0	.btequ		3,u2c0		; Transmit register empty flag
crd_u2c0	.btequ		4,u2c0		; CTS/RTS disable bit
ckpol_u2c0	.btequ		6,u2c0		; CLK polarity select bit
uform_u2c0	.btequ		7,u2c0		; Transfer format select bit
;
u2c1		.equ		037dh		; UART2 transmit/receive control register 1
te_u2c1		.btequ		0,u2c1		; Transmit enable bit
ti_u2c1		.btequ		1,u2c1		; Transmit buffer empty flag
re_u2c1		.btequ		2,u2c1		; Receive enable bit
ri_u2c1		.btequ		3,u2c1		; Receive complete flag
u2irs		.btequ		4,u2c1		; UART2 transmit interrupt cause select bit
u2rrm		.btequ		5,u2c1		; UART2 continuous receive mode enable bit
u2lch		.btequ		6,u2c1		; Data logic select bit
u2ere		.btequ		7,u2c1		; Error signal output enable bit
u2irs_u2c1	.btequ		4,u2c1
u2rrm_u2c1	.btequ		5,u2c1
u2lch_u2c1	.btequ		6,u2c1
u2ere_u2c1	.btequ		7,u2c1
;
u2rb		.equ		037eh		; UART2 receive buffer register
u2rbl		.equ		u2rb		;		Low
u2rbh		.equ		u2rb+1		;		High
oer_u2rb	.btequ		4,u2rbh		; Overrun error flag
fer_u2rb	.btequ		5,u2rbh		; Framing error flag
per_u2rb	.btequ		6,u2rbh		; Parity error flag
sum_u2rb	.btequ		7,u2rbh		; Error sum flag
;
;-------------------------------------------------------
;	Count start flag
;-------------------------------------------------------
tabsr		.equ		0380h
;
ta0s		.btequ		0,tabsr		; Timer A0 count start flag
ta1s		.btequ		1,tabsr		; Timer A1 count start flag
ta2s		.btequ		2,tabsr		; Timer A2 count start flag
ta3s		.btequ		3,tabsr		; Timer A3 count start flag
ta4s		.btequ		4,tabsr		; Timer A4 count start flag
tb0s		.btequ		5,tabsr		; Timer B0 count start flag
tb1s		.btequ		6,tabsr		; Timer B1 count start flag
tb2s		.btequ		7,tabsr		; Timer B2 count start flag
;
;-------------------------------------------------------
;	Clock prescaler reset flag
;-------------------------------------------------------
cpsrf		.equ		0381h
;
cpsr		.btequ		7,cpsrf		; Clock prescaler reset flag
;
;-------------------------------------------------------
;	One-shot start flag
;-------------------------------------------------------
onsf		.equ		0382h
;
ta0os		.btequ		0,onsf		; Timer A0 one-shot start flag
ta1os		.btequ		1,onsf		; Timer A1 one-shot start flag
ta2os		.btequ		2,onsf		; Timer A2 one-shot start flag
ta3os		.btequ		3,onsf		; Timer A3 one-shot start flag
ta4os		.btequ		4,onsf		; Timer A4 one-shot start flag
ta0tgl		.btequ		6,onsf		; Timer A0 event/trigger select bit
ta0tgh		.btequ		7,onsf		;
;
;-------------------------------------------------------
;	Trigger select register
;-------------------------------------------------------
trgsr		.equ		0383h
;
ta1tgl		.btequ		0,trgsr		; Timer A1 event/trigger select bit
ta1tgh		.btequ		1,trgsr		;
ta2tgl		.btequ		2,trgsr		; Timer A2 event/trigger select bit
ta2tgh		.btequ		3,trgsr		;
ta3tgl		.btequ		4,trgsr		; Timer A3 event/trigger select bit
ta3tgh		.btequ		5,trgsr		;
ta4tgl		.btequ		6,trgsr		; Timer A4 event/trigger select bit
ta4tgh		.btequ		7,trgsr		;
;
;-------------------------------------------------------
;	Up/down falg
;-------------------------------------------------------
udf		.equ		0384h
;
ta0ud		.btequ		0,udf		; Timer A0 up/down falg
ta1ud		.btequ		1,udf		; Timer A1 up/down falg
ta2ud		.btequ		2,udf		; Timer A2 up/down falg
ta3ud		.btequ		3,udf		; Timer A3 up/down falg
ta4ud		.btequ		4,udf		; Timer A4 up/down falg
ta2p		.btequ		5,udf		; Timer A2 two-phase pulse signal processing select bit
ta3p		.btequ		6,udf		; Timer A3 two-phase pulse signal processing select bit
ta4p		.btequ		7,udf		; Timer A4 two-phase pulse signal processing select bit
;
;-------------------------------------------------------
;	Timer
;-------------------------------------------------------
ta0			.equ		0386h		; Timer A0
ta0l		.equ		ta0			; 		Low
ta0h		.equ		ta0+1		; 		High
;
ta1			.equ		0388h		; Timer A1
ta1l		.equ		ta1			; 		Low
ta1h		.equ		ta1+1		;		High
;
ta2			.equ		038ah		; Timer A2
ta2l		.equ		ta2			; 		Low
ta2h		.equ		ta2+1		;		High
;
ta3			.equ		038ch		; Timer A3
ta3l		.equ		ta3			; 		Low
ta3h		.equ		ta3+1		;		High
;
ta4			.equ		038eh		; Timer A4
ta4l		.equ		ta4			; 		Low
ta4h		.equ		ta4+1		;		High
;
tb0			.equ		0390h		; Timer B0
tb0l		.equ		tb0			; 		Low
tb0h		.equ		tb0+1		;		High
;
tb1			.equ		0392h		; Timer B1
tb1l		.equ		tb1			; 		Low
tb1h		.equ		tb1+1		;		High
;
tb2			.equ		0394h		; TimerB2
tb2l		.equ		tb2			; 		Low
tb2h		.equ		tb2+1		;		High
;
ta0mr		.equ		0396h		; Timer A0 mode register
tmod0_ta0mr	.btequ		0,ta0mr		; Operation mode select bit
tmod1_ta0mr	.btequ		1,ta0mr		;
mr0_ta0mr	.btequ		2,ta0mr		;
mr1_ta0mr	.btequ		3,ta0mr		;
mr2_ta0mr	.btequ		4,ta0mr		;
mr3_ta0mr	.btequ		5,ta0mr		;
tck0_ta0mr	.btequ		6,ta0mr		; Count source select bit
tck1_ta0mr	.btequ		7,ta0mr		;
;
ta1mr		.equ		0397h		; Timer A1 mode register
tmod0_ta1mr	.btequ		0,ta1mr		; Operation mode select bit
tmod1_ta1mr	.btequ		1,ta1mr		;
mr0_ta1mr	.btequ		2,ta1mr		;
mr1_ta1mr	.btequ		3,ta1mr		;
mr2_ta1mr	.btequ		4,ta1mr		;
mr3_ta1mr	.btequ		5,ta1mr		;
tck0_ta1mr	.btequ		6,ta1mr		; Count source select bit
tck1_ta1mr	.btequ		7,ta1mr		;
;
ta2mr		.equ		0398h		; Timer A2 mode register
tmod0_ta2mr	.btequ		0,ta2mr		; Operation mode select bit
tmod1_ta2mr	.btequ		1,ta2mr		;
mr0_ta2mr	.btequ		2,ta2mr		;
mr1_ta2mr	.btequ		3,ta2mr		;
mr2_ta2mr	.btequ		4,ta2mr		;
mr3_ta2mr	.btequ		5,ta2mr		;
tck0_ta2mr	.btequ		6,ta2mr		; Count source select bit
tck1_ta2mr	.btequ		7,ta2mr		;
;
ta3mr		.equ		0399h		; Timer A3 mode register
tmod0_ta3mr	.btequ		0,ta3mr		; Operation mode select bit
tmod1_ta3mr	.btequ		1,ta3mr		;
mr0_ta3mr	.btequ		2,ta3mr		;
mr1_ta3mr	.btequ		3,ta3mr		;
mr2_ta3mr	.btequ		4,ta3mr		;
mr3_ta3mr	.btequ		5,ta3mr		;
tck0_ta3mr	.btequ		6,ta3mr		; Count source select bit
tck1_ta3mr	.btequ		7,ta3mr		;
;
ta4mr		.equ		039ah		; Timer A4 mode register
tmod0_ta4mr	.btequ		0,ta4mr		; Operation mode select bit
tmod1_ta4mr	.btequ		1,ta4mr		;
mr0_ta4mr	.btequ		2,ta4mr		;
mr1_ta4mr	.btequ		3,ta4mr		;
mr2_ta4mr	.btequ		4,ta4mr		;
mr3_ta4mr	.btequ		5,ta4mr		;
tck0_ta4mr	.btequ		6,ta4mr		; Count source select bit
tck1_ta4mr	.btequ		7,ta4mr		;
;
tb0mr		.equ		039bh		; Timer B0 mode register
tmod0_tb0mr	.btequ		0,tb0mr		; Operation mode select bit
tmod1_tb0mr	.btequ		1,tb0mr		;
mr0_tb0mr	.btequ		2,tb0mr		;
mr1_tb0mr	.btequ		3,tb0mr		;
mr2_tb0mr	.btequ		4,tb0mr		;
mr3_tb0mr	.btequ		5,tb0mr		;
tck0_tb0mr	.btequ		6,tb0mr		; Count source select bit
tck1_tb0mr	.btequ		7,tb0mr		;
;
tb1mr		.equ		039ch		; Timer B1 mode register
tmod0_tb1mr	.btequ		0,tb1mr		; Operation mode select bit
tmod1_tb1mr	.btequ		1,tb1mr		;
mr0_tb1mr	.btequ		2,tb1mr		;
mr1_tb1mr	.btequ		3,tb1mr		;
mr2_tb1mr	.btequ		4,tb1mr		;
mr3_tb1mr	.btequ		5,tb1mr		;
tck0_tb1mr	.btequ		6,tb1mr		; Count source select bit
tck1_tb1mr	.btequ		7,tb1mr		;
;
tb2mr		.equ		039dh		; Timer B2 mode register
tmod0_tb2mr	.btequ		0,tb2mr		; Operation mode select bit
tmod1_tb2mr	.btequ		1,tb2mr		;
mr0_tb2mr	.btequ		2,tb2mr		;
mr1_tb2mr	.btequ		3,tb2mr		;
mr2_tb2mr	.btequ		4,tb2mr		;
mr3_tb2mr	.btequ		5,tb2mr		;
tck0_tb2mr	.btequ		6,tb2mr		; Count source select bit
tck1_tb2mr	.btequ		7,tb2mr		;
;
;-------------------------------------------------------
;	UART0
;-------------------------------------------------------
u0mr		.equ		03a0h		; UART0 transmit/receive mode register
smd0_u0mr	.btequ		0,u0mr		; Serial I/O mode select bit
smd1_u0mr	.btequ		1,u0mr		;
smd2_u0mr	.btequ		2,u0mr		;
ckdir_u0mr	.btequ		3,u0mr		; Internal/external clock select bit
stps_u0mr	.btequ		4,u0mr		; Stop bit length select bit
pry_u0mr	.btequ		5,u0mr		; Odd/even parity select bit
prye_u0mr	.btequ		6,u0mr		; Parity enable bit
slep_u0mr	.btequ		7,u0mr		; Sleep  select bit
;
u0brg		.equ		03a1h		; UART0 bit rate generator
;
u0tb		.equ		03a2h		; UART0 transmit buffer register
u0tbl		.equ		u0tb		; 		Low
u0tbh		.equ		u0tb+1		;		High
;
u0c0		.equ		03a4h		; UART0 transmit/receive control register 0
clk0_u0c0	.btequ		0,u0c0		; BRG count source select bit
clk1_u0c0	.btequ		1,u0c0		; 
crs_u0c0	.btequ		2,u0c0		; CTS/RTS function select bit
txept_u0c0	.btequ		3,u0c0		; Transmit register empty flag
crd_u0c0	.btequ		4,u0c0		; CTS/RTS enable bit
nch_u0c0	.btequ		5,u0c0		; Data output select bit
ckpol_u0c0	.btequ		6,u0c0		; CLK polarity select bit
uform_u0c0	.btequ		7,u0c0		; Transfer format select bit
;
u0c1		.equ		03a5h		; UART0 transmit/receive control register 1
te_u0c1		.btequ		0,u0c1		; Transmit enable bit
ti_u0c1		.btequ		1,u0c1		; Transmit buffer empty flag
re_u0c1		.btequ		2,u0c1		; Receive enable bit
ri_u0c1		.btequ		3,u0c1		; Receive complete flag
;
u0rb		.equ		03a6h		; UART0 receive buffer register
u0rbl		.equ		u0rb		;		Low
u0rbh		.equ		u0rb+1		;		High
oer_u0rb	.btequ		4,u0rbh		; Overrun error flag
fer_u0rb	.btequ		5,u0rbh		; Framing error flag
per_u0rb	.btequ		6,u0rbh		; Parity error flag
sum_u0rb	.btequ		7,u0rbh		; Error sum flag
;
;-------------------------------------------------------
;	UART1					
;-------------------------------------------------------
u1mr		.equ		03a8h		; UART1 transmit/receive mode register
smd0_u1mr	.btequ		0,u1mr		; Serial I/O mode select bit
smd1_u1mr	.btequ		1,u1mr		;
smd2_u1mr	.btequ		2,u1mr		;
ckdir_u1mr	.btequ		3,u1mr		; Internal/external clock select bit
stps_u1mr	.btequ		4,u1mr		; Stop bit length select bit
pry_u1mr	.btequ		5,u1mr		; Odd/even parity select bit
prye_u1mr	.btequ		6,u1mr		; Parity enable bit
slep_u1mr	.btequ		7,u1mr		; Sleep select bit
;
u1brg		.equ		03a9h		; UART1 bit rate generator
;
u1tb		.equ		03aah		; UART1 transmit buffer register
u1tbl		.equ		u1tb		; 		Low
u1tbh		.equ		u1tb+1		;		High
;
u1c0		.equ		03ach		; UART1 transmit/receive control register 0
clk0_u1c0	.btequ		0,u1c0		; BRG count source select bit
clk1_u1c0	.btequ		1,u1c0		; 
crs_u1c0	.btequ		2,u1c0		; CTS/RTS function select bit
txept_u1c0	.btequ		3,u1c0		; Transmit register empty flag
crd_u1c0	.btequ		4,u1c0		; CTS/RTS disable bit
nch_u1c0	.btequ		5,u1c0		; Data output select bit
ckpol_u1c0	.btequ		6,u1c0		; CLK polarity  select bit
uform_u1c0	.btequ		7,u1c0		; Transfer format select bit
;
u1c1		.equ		03adh		; UART1 transmit/receive control register 1
te_u1c1		.btequ		0,u1c1		; Transmit enable bit
ti_u1c1		.btequ		1,u1c1		; Transmit buffer empty flag
re_u1c1		.btequ		2,u1c1		; Receive enable bit
ri_u1c1		.btequ		3,u1c1		; Receive complete flag
;
u1rb		.equ		03aeh		; UART1 receive register
u1rbl		.equ		u1rb		;		Low
u1rbh		.equ		u1rb+1		;		High
oer_u1rb	.btequ		4,u1rbh		; Overrun error flag
fer_u1rb	.btequ		5,u1rbh		; Framing error flag
per_u1rb	.btequ		6,u1rbh		; Parity error flag
sum_u1rb	.btequ		7,u1rbh		; Error sum flag
;
ucon		.equ		03b0h		; UART transmit/receive control register 2
u0irs		.btequ		0,ucon		; UART0 transmit interrupt cause selectbit
u1irs		.btequ		1,ucon		; UART1 transmit interrupt cause selectbit
u0rrm		.btequ		2,ucon		; UART0 continuous receive mode disable bit
u1rrm		.btequ		3,ucon		; UART1 continuous receive mode disable bit
clkmd0		.btequ		4,ucon		; CLK/CLKS select bit
clkmd1		.btequ		5,ucon		;
rcsp		.btequ		6,ucon		; Separate RTS/CTS bit
;
;
;--------------------------------------------------------
;	DMA request cause select register
;--------------------------------------------------------
dm0sl		.equ		03b8h		; DMA0 request cause select register
dsel0_dm0sl	.btequ		0,dm0sl		; DMA request cause select bit
dsel1_dm0sl	.btequ		1,dm0sl		;
dsel2_dm0sl	.btequ		2,dm0sl		;
dsel3_dm0sl	.btequ		3,dm0sl		;
dsr_dm0sl	.btequ		7,dm0sl		; Software DMA request bit
;
dm1sl		.equ		03bah		; DMA1 request cause select register
dsel0_dm1sl	.btequ		0,dm1sl		; DMA request cause select bit
dsel1_dm1sl	.btequ		1,dm1sl		;
dsel2_dm1sl	.btequ		2,dm1sl		;
dsel3_dm1sl	.btequ		3,dm1sl		;
dsr_dm1sl	.btequ		7,dm1sl		; Software DMA request bit
;
;-------------------------------------------------------
;	CRC
;-------------------------------------------------------
crcd		.equ		03bch		; CRC data register
crcdl		.equ		crcd		;		Low
crcdh		.equ		crcd+1		;		High
;
crcin		.equ		03beh		; CRC input register
;
;-------------------------------------------------------
;	A-D, D-A
;-------------------------------------------------------
ad0			.equ		03c0h		; AD register 0
ad0l		.equ		ad0			;		Low
ad0h		.equ		ad0+1		;		High
;
ad1			.equ		03c2h		; AD register 1
ad1l		.equ		ad1			;		Low
ad1h		.equ		ad1+1		;		High
;
ad2			.equ		03c4h		; AD register 2
ad2l		.equ		ad2			;		Low
ad2h		.equ		ad2+1		;		High
;
ad3			.equ		03c6h		; AD register 3
ad3l		.equ		ad3			;		Low
ad3h		.equ		ad3+1		;		High
;
ad4			.equ		03c8h		; AD register 4
ad4l		.equ		ad4			;		Low
ad4h		.equ		ad4+1		;		High
;
ad5			.equ		03cah		; AD register 5
ad5l		.equ		ad5			;		Low
ad5h		.equ		ad5+1		;		High
;
ad6			.equ		03cch		; AD register 6
ad6l		.equ		ad6			;		Low
ad6h		.equ		ad6+1		;		High
;
ad7			.equ		03ceh		; AD register 7
ad7l		.equ		ad7			;		Low
ad7h		.equ		ad7+1		;		High
;
adcon2		.equ		03d4h		; AD control register 2
smp			.btequ		0,adcon2	; AD conversion method select bit
;
adcon0		.equ		03d6h		; AD control register 0
ch0			.btequ		0,adcon0	; Analog input select bit
ch1			.btequ		1,adcon0	;
ch2			.btequ		2,adcon0	;
md0			.btequ		3,adcon0	; AD operation mode select bit 0
md1			.btequ		4,adcon0	;
trg			.btequ		5,adcon0	; Trigger select bit
adst		.btequ		6,adcon0	; AD conversion start flag
cks0		.btequ		7,adcon0	; Frequency select bit 0
;
adcon1		.equ		03d7h		; AD control register 1
scan0		.btequ		0,adcon1	; AD sweep pin select bit
scan1		.btequ		1,adcon1	;
md2			.btequ		2,adcon1	; AD operation mode select bit 1
bits		.btequ		3,adcon1	; 8/10 bit mode select bit
cks1		.btequ		4,adcon1	; Frequency select bit1
vcut		.btequ		5,adcon1	; Vref connect bit
opa0		.btequ		6,adcon1	; External op-amp connection mode bit
opa1		.btequ		7,adcon1	;
;
;-----------------------------------------------
;
da0			.equ		03d8h		; DA register 0
;
da1			.equ		03dah		; DA register1
;
dacon		.equ		03dch		; DA control register
da0e		.btequ		0,dacon		; DA0 output enable bit
da1e		.btequ		1,dacon		; DA1 output enable bit
;
;
;-------------------------------------------------------
;	Port						
;-------------------------------------------------------
p0			.equ		03e0h		; Port P0
p0_0		.btequ		0,p0
p0_1		.btequ		1,p0
p0_2		.btequ		2,p0
p0_3		.btequ		3,p0
p0_4		.btequ		4,p0
p0_5		.btequ		5,p0
p0_6		.btequ		6,p0
p0_7		.btequ		7,p0
;
p1			.equ		03e1h		; Port P1
p1_0		.btequ		0,p1
p1_1		.btequ		1,p1
p1_2		.btequ		2,p1
p1_3		.btequ		3,p1
p1_4		.btequ		4,p1
p1_5		.btequ		5,p1
p1_6		.btequ		6,p1
p1_7		.btequ		7,p1
;
pd0			.equ		03e2h		; Port P0 direction register
pd0_0		.btequ		0,pd0
pd0_1		.btequ		1,pd0
pd0_2		.btequ		2,pd0
pd0_3		.btequ		3,pd0
pd0_4		.btequ		4,pd0
pd0_5		.btequ		5,pd0
pd0_6		.btequ		6,pd0
pd0_7		.btequ		7,pd0
;
pd1			.equ		03e3h		; Port P1 direction register
pd1_0		.btequ		0,pd1
pd1_1		.btequ		1,pd1
pd1_2		.btequ		2,pd1
pd1_3		.btequ		3,pd1
pd1_4		.btequ		4,pd1
pd1_5		.btequ		5,pd1
pd1_6		.btequ		6,pd1
pd1_7		.btequ		7,pd1
;
p2			.equ		03e4h		; Port P2
p2_0		.btequ		0,p2
p2_1		.btequ		1,p2
p2_2		.btequ		2,p2
p2_3		.btequ		3,p2
p2_4		.btequ		4,p2
p2_5		.btequ		5,p2
p2_6		.btequ		6,p2
p2_7		.btequ		7,p2
;
p3			.equ		03e5h		; Port P3
p3_0		.btequ		0,p3
p3_1		.btequ		1,p3
p3_2		.btequ		2,p3
p3_3		.btequ		3,p3
p3_4		.btequ		4,p3
p3_5		.btequ		5,p3
p3_6		.btequ		6,p3
p3_7		.btequ		7,p3
;
pd2			.equ		03e6h		; Port P2 direction register
pd2_0		.btequ		0,pd2
pd2_1		.btequ		1,pd2
pd2_2		.btequ		2,pd2
pd2_3		.btequ		3,pd2
pd2_4		.btequ		4,pd2
pd2_5		.btequ		5,pd2
pd2_6		.btequ		6,pd2
pd2_7		.btequ		7,pd2
;
pd3			.equ		03e7h		; Port P3 direction register
pd3_0		.btequ		0,pd3
pd3_1		.btequ		1,pd3
pd3_2		.btequ		2,pd3
pd3_3		.btequ		3,pd3
pd3_4		.btequ		4,pd3
pd3_5		.btequ		5,pd3
pd3_6		.btequ		6,pd3
pd3_7		.btequ		7,pd3
;
p4			.equ		03e8h		; Port P4
p4_0		.btequ		0,p4
p4_1		.btequ		1,p4
p4_2		.btequ		2,p4
p4_3		.btequ		3,p4
p4_4		.btequ		4,p4
p4_5		.btequ		5,p4
p4_6		.btequ		6,p4
p4_7		.btequ		7,p4
;
p5			.equ		03e9h		; Port P5
p5_0		.btequ		0,p5
p5_1		.btequ		1,p5
p5_2		.btequ		2,p5
p5_3		.btequ		3,p5
p5_4		.btequ		4,p5
p5_5		.btequ		5,p5
p5_6		.btequ		6,p5
p5_7		.btequ		7,p5
;
pd4			.equ		03eah		; Port P4 direction register
pd4_0		.btequ		0,pd4
pd4_1		.btequ		1,pd4
pd4_2		.btequ		2,pd4
pd4_3		.btequ		3,pd4
pd4_4		.btequ		4,pd4
pd4_5		.btequ		5,pd4
pd4_6		.btequ		6,pd4
pd4_7		.btequ		7,pd4
;
pd5			.equ		03ebh		; Port P5 direction register
pd5_0		.btequ		0,pd5
pd5_1		.btequ		1,pd5
pd5_2		.btequ		2,pd5
pd5_3		.btequ		3,pd5
pd5_4		.btequ		4,pd5
pd5_5		.btequ		5,pd5
pd5_6		.btequ		6,pd5
pd5_7		.btequ		7,pd5
;
p6			.equ		03ech		; Port P6
p6_0		.btequ		0,p6
p6_1		.btequ		1,p6
p6_2		.btequ		2,p6
p6_3		.btequ		3,p6
p6_4		.btequ		4,p6
p6_5		.btequ		5,p6
p6_6		.btequ		6,p6
p6_7		.btequ		7,p6
;
p7			.equ		03edh		; Port P7
p7_0		.btequ		0,p7
p7_1		.btequ		1,p7
p7_2		.btequ		2,p7
p7_3		.btequ		3,p7
p7_4		.btequ		4,p7
p7_5		.btequ		5,p7
p7_6		.btequ		6,p7
p7_7		.btequ		7,p7
;
pd6			.equ		03eeh		; Port P6 direction register
pd6_0		.btequ		0,pd6
pd6_1		.btequ		1,pd6
pd6_2		.btequ		2,pd6
pd6_3		.btequ		3,pd6
pd6_4		.btequ		4,pd6
pd6_5		.btequ		5,pd6
pd6_6		.btequ		6,pd6
pd6_7		.btequ		7,pd6
;
pd7			.equ		03efh		; Port P7 direction register
pd7_0		.btequ		0,pd7
pd7_1		.btequ		1,pd7
pd7_2		.btequ		2,pd7
pd7_3		.btequ		3,pd7
pd7_4		.btequ		4,pd7
pd7_5		.btequ		5,pd7
pd7_6		.btequ		6,pd7
pd7_7		.btequ		7,pd7
;
p8			.equ		03f0h		; Port P8
p8_0		.btequ		0,p8
p8_1		.btequ		1,p8
p8_2		.btequ		2,p8
p8_3		.btequ		3,p8
p8_4		.btequ		4,p8
p8_5		.btequ		5,p8
p8_6		.btequ		6,p8
p8_7		.btequ		7,p8
;
p9			.equ		03f1h		; Port P9
p9_0		.btequ		0,p9
p9_1		.btequ		1,p9
p9_2		.btequ		2,p9
p9_3		.btequ		3,p9
p9_4		.btequ		4,p9
p9_5		.btequ		5,p9
p9_6		.btequ		6,p9
p9_7		.btequ		7,p9
;
pd8			.equ		03f2h		; Port P8 direction register
pd8_0		.btequ		0,pd8
pd8_1		.btequ		1,pd8
pd8_2		.btequ		2,pd8
pd8_3		.btequ		3,pd8
pd8_4		.btequ		4,pd8
pd8_5		.btequ		5,pd8
pd8_6		.btequ		6,pd8
pd8_7		.btequ		7,pd8
;
pd9			.equ		03f3h		; Port P9 direction register
pd9_0		.btequ		0,pd9
pd9_1		.btequ		1,pd9
pd9_2		.btequ		2,pd9
pd9_3		.btequ		3,pd9
pd9_4		.btequ		4,pd9
pd9_5		.btequ		5,pd9
pd9_6		.btequ		6,pd9
pd9_7		.btequ		7,pd9
;
p10			.equ		03f4h		; Port P10
p10_0		.btequ		0,p10
p10_1		.btequ		1,p10
p10_2		.btequ		2,p10
p10_3		.btequ		3,p10
p10_4		.btequ		4,p10
p10_5		.btequ		5,p10
p10_6		.btequ		6,p10
p10_7		.btequ		7,p10
;
pd10		.equ		03f6h		; Port P10 direction register
pd10_0		.btequ		0,pd10 
pd10_1		.btequ		1,pd10
pd10_2		.btequ		2,pd10
pd10_3		.btequ		3,pd10
pd10_4		.btequ		4,pd10
pd10_5		.btequ		5,pd10
pd10_6		.btequ		6,pd10
pd10_7		.btequ		7,pd10
;
;-------------------------------------------------------
;	Pull-up control register
;-------------------------------------------------------
pur0		.equ		03fch		; Pull-up control register 0
;
pu00		.btequ		0,pur0		; Pull-up register 00
pu01		.btequ		1,pur0		; Pull-up register 01
pu02		.btequ		2,pur0		; Pull-up register 02
pu03		.btequ		3,pur0		; Pull-up register 03
pu04		.btequ		4,pur0		; Pull-up register 04
pu05		.btequ		5,pur0		; Pull-up register 05
pu06		.btequ		6,pur0		; Pull-up register 06
pu07		.btequ		7,pur0		; Pull-up register 07
;
pur1		.equ		03fdh		; Pull-up control register 1
;
pu10		.btequ		0,pur1		; Pull-up register 10
pu11		.btequ		1,pur1		; Pull-up register 11
pu12		.btequ		2,pur1		; Pull-up register 12
pu13		.btequ		3,pur1		; Pull-up register 13
pu14		.btequ		4,pur1		; Pull-up register 14
pu15		.btequ		5,pur1		; Pull-up register 15
pu16		.btequ		6,pur1		; Pull-up register 16
pu17		.btequ		7,pur1		; Pull-up register 17
;
pur2		.equ		03feh		; Pull-up control register 2
;
pu20		.btequ		0,pur2		; Pull-up register 20
pu21		.btequ		1,pur2		; Pull-up register 21
pu22		.btequ		2,pur2		; Pull-up register 22
pu23		.btequ		3,pur2		; Pull-up register 23
pu24		.btequ		4,pur2		; Pull-up register 24
pu25		.btequ		5,pur2		; Pull-up register 25
;
;-------------------------------------------------------
;	Port control register
;-------------------------------------------------------
pcr			.equ		03ffh
;

