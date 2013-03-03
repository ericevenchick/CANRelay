/* Based on CPU DB MC9S08DZ60_64, version 3.00.025 (RegistersPrg V2.32) */
/* DataSheet : MC9S08DZ60 Rev. 3 10/2007 */

#include <mc9s08dz32.h>

/*lint -save -esym(765, *) */


/* * * * *  8-BIT REGISTERS  * * * * * * * * * * * * * * * */
volatile PTADSTR _PTAD;                                    /* Port A Data Register; 0x00000000 */
volatile PTADDSTR _PTADD;                                  /* Port A Data Direction Register; 0x00000001 */
volatile PTBDSTR _PTBD;                                    /* Port B Data Register; 0x00000002 */
volatile PTBDDSTR _PTBDD;                                  /* Port B Data Direction Register; 0x00000003 */
volatile PTCDSTR _PTCD;                                    /* Port C Data Register; 0x00000004 */
volatile PTCDDSTR _PTCDD;                                  /* Port C Data Direction Register; 0x00000005 */
volatile PTDDSTR _PTDD;                                    /* Port D Data Register; 0x00000006 */
volatile PTDDDSTR _PTDDD;                                  /* Port D Data Direction Register; 0x00000007 */
volatile PTEDSTR _PTED;                                    /* Port E Data Register; 0x00000008 */
volatile PTEDDSTR _PTEDD;                                  /* Port E Data Direction Register; 0x00000009 */
volatile PTFDSTR _PTFD;                                    /* Port F Data Register; 0x0000000A */
volatile PTFDDSTR _PTFDD;                                  /* Port F Data Direction Register; 0x0000000B */
volatile PTGDSTR _PTGD;                                    /* Port G Data Register; 0x0000000C */
volatile PTGDDSTR _PTGDD;                                  /* Port G Data Direction Register; 0x0000000D */
volatile ACMP1SCSTR _ACMP1SC;                              /* ACMP1 Status and Control Register; 0x0000000E */
volatile ACMP2SCSTR _ACMP2SC;                              /* ACMP2 Status and Control Register; 0x0000000F */
volatile ADCSC1STR _ADCSC1;                                /* Status and Control Register 1; 0x00000010 */
volatile ADCSC2STR _ADCSC2;                                /* Status and Control Register 2; 0x00000011 */
volatile ADCCFGSTR _ADCCFG;                                /* Configuration Register; 0x00000016 */
volatile APCTL1STR _APCTL1;                                /* Pin Control 1 Register; 0x00000017 */
volatile APCTL2STR _APCTL2;                                /* Pin Control 2 Register; 0x00000018 */
volatile APCTL3STR _APCTL3;                                /* Pin Control 3 Register; 0x00000019 */
volatile IRQSCSTR _IRQSC;                                  /* Interrupt request status and control register; 0x0000001C */
volatile TPM1SCSTR _TPM1SC;                                /* TPM1 Status and Control Register; 0x00000020 */
volatile TPM1C0SCSTR _TPM1C0SC;                            /* TPM1 Timer Channel 0 Status and Control Register; 0x00000025 */
volatile TPM1C1SCSTR _TPM1C1SC;                            /* TPM1 Timer Channel 1 Status and Control Register; 0x00000028 */
volatile TPM1C2SCSTR _TPM1C2SC;                            /* TPM1 Timer Channel 2 Status and Control Register; 0x0000002B */
volatile TPM1C3SCSTR _TPM1C3SC;                            /* TPM1 Timer Channel 3 Status and Control Register; 0x0000002E */
volatile TPM1C4SCSTR _TPM1C4SC;                            /* TPM1 Timer Channel 4 Status and Control Register; 0x00000031 */
volatile TPM1C5SCSTR _TPM1C5SC;                            /* TPM1 Timer Channel 5 Status and Control Register; 0x00000034 */
volatile SCI1C1STR _SCI1C1;                                /* SCI1 Control Register 1; 0x0000003A */
volatile SCI1C2STR _SCI1C2;                                /* SCI1 Control Register 2; 0x0000003B */
volatile SCI1S1STR _SCI1S1;                                /* SCI1 Status Register 1; 0x0000003C */
volatile SCI1S2STR _SCI1S2;                                /* SCI1 Status Register 2; 0x0000003D */
volatile SCI1C3STR _SCI1C3;                                /* SCI1 Control Register 3; 0x0000003E */
volatile SCI1DSTR _SCI1D;                                  /* SCI1 Data Register; 0x0000003F */
volatile SCI2C1STR _SCI2C1;                                /* SCI2 Control Register 1; 0x00000042 */
volatile SCI2C2STR _SCI2C2;                                /* SCI2 Control Register 2; 0x00000043 */
volatile SCI2S1STR _SCI2S1;                                /* SCI2 Status Register 1; 0x00000044 */
volatile SCI2S2STR _SCI2S2;                                /* SCI2 Status Register 2; 0x00000045 */
volatile SCI2C3STR _SCI2C3;                                /* SCI2 Control Register 3; 0x00000046 */
volatile SCI2DSTR _SCI2D;                                  /* SCI2 Data Register; 0x00000047 */
volatile MCGC1STR _MCGC1;                                  /* MCG Control Register 1; 0x00000048 */
volatile MCGC2STR _MCGC2;                                  /* MCG Control Register 2; 0x00000049 */
volatile MCGTRMSTR _MCGTRM;                                /* MCG Trim Register; 0x0000004A */
volatile MCGSCSTR _MCGSC;                                  /* MCG Status and Control Register; 0x0000004B */
volatile MCGC3STR _MCGC3;                                  /* MCG Control Register 3; 0x0000004C */
volatile SPIC1STR _SPIC1;                                  /* SPI Control Register 1; 0x00000050 */
volatile SPIC2STR _SPIC2;                                  /* SPI Control Register 2; 0x00000051 */
volatile SPIBRSTR _SPIBR;                                  /* SPI Baud Rate Register; 0x00000052 */
volatile SPISSTR _SPIS;                                    /* SPI Status Register; 0x00000053 */
volatile SPIDSTR _SPID;                                    /* SPI Data Register; 0x00000055 */
volatile IICASTR _IICA;                                    /* IIC Address Register; 0x00000058 */
volatile IICFSTR _IICF;                                    /* IIC Frequency Divider Register; 0x00000059 */
volatile IICC1STR _IICC1;                                  /* IIC Control Register 1; 0x0000005A */
volatile IICSSTR _IICS;                                    /* IIC Status Register; 0x0000005B */
volatile IICDSTR _IICD;                                    /* IIC Data I/O Register; 0x0000005C */
volatile IICC2STR _IICC2;                                  /* IIC Control Register 2; 0x0000005D */
volatile TPM2SCSTR _TPM2SC;                                /* TPM2 Status and Control Register; 0x00000060 */
volatile TPM2C0SCSTR _TPM2C0SC;                            /* TPM2 Timer Channel 0 Status and Control Register; 0x00000065 */
volatile TPM2C1SCSTR _TPM2C1SC;                            /* TPM2 Timer Channel 1 Status and Control Register; 0x00000068 */
volatile RTCSCSTR _RTCSC;                                  /* RTC Status and Control Register; 0x0000006C */
volatile RTCCNTSTR _RTCCNT;                                /* RTC Counter Register; 0x0000006D */
volatile RTCMODSTR _RTCMOD;                                /* RTC Modulo Register; 0x0000006E */
volatile SRSSTR _SRS;                                      /* System Reset Status Register; 0x00001800 */
volatile SBDFRSTR _SBDFR;                                  /* System Background Debug Force Reset Register; 0x00001801 */
volatile SOPT1STR _SOPT1;                                  /* System Options Register 1; 0x00001802 */
volatile SOPT2STR _SOPT2;                                  /* System Options Register 2; 0x00001803 */
volatile SPMSC1STR _SPMSC1;                                /* System Power Management Status and Control 1 Register; 0x00001809 */
volatile SPMSC2STR _SPMSC2;                                /* System Power Management Status and Control 2 Register; 0x0000180A */
volatile DBGCSTR _DBGC;                                    /* Debug Control Register; 0x00001816 */
volatile DBGTSTR _DBGT;                                    /* Debug Trigger Register; 0x00001817 */
volatile DBGSSTR _DBGS;                                    /* Debug Status Register; 0x00001818 */
volatile FCDIVSTR _FCDIV;                                  /* EEPROM and FLASH Clock Divider Register; 0x00001820 */
volatile FOPTSTR _FOPT;                                    /* EEPROM and FLASH Options Register; 0x00001821 */
volatile FCNFGSTR _FCNFG;                                  /* EEPROM and FLASH Configuration Register; 0x00001823 */
volatile FPROTSTR _FPROT;                                  /* EEPROM and FLASH Protection Register; 0x00001824 */
volatile FSTATSTR _FSTAT;                                  /* EEPROM and FLASH Status Register; 0x00001825 */
volatile FCMDSTR _FCMD;                                    /* EEPROM and FLASH Command Register; 0x00001826 */
volatile PTAPESTR _PTAPE;                                  /* Port A Pull Enable Register; 0x00001840 */
volatile PTASESTR _PTASE;                                  /* Port A Slew Rate Enable Register; 0x00001841 */
volatile PTADSSTR _PTADS;                                  /* Port A Drive Strength Selection Register; 0x00001842 */
volatile PTASCSTR _PTASC;                                  /* Port A Interrupt Status and Control Register; 0x00001844 */
volatile PTAPSSTR _PTAPS;                                  /* Port A Interrupt Pin Select Register; 0x00001845 */
volatile PTAESSTR _PTAES;                                  /* Port A Interrupt Edge Select Register; 0x00001846 */
volatile PTBPESTR _PTBPE;                                  /* Port B Pull Enable Register; 0x00001848 */
volatile PTBSESTR _PTBSE;                                  /* Port B Slew Rate Enable Register; 0x00001849 */
volatile PTBDSSTR _PTBDS;                                  /* Port B Drive Strength Selection Register; 0x0000184A */
volatile PTBSCSTR _PTBSC;                                  /* Port B Interrupt Status and Control Register; 0x0000184C */
volatile PTBPSSTR _PTBPS;                                  /* Port B Interrupt Pin Select Register; 0x0000184D */
volatile PTBESSTR _PTBES;                                  /* Port B Interrupt Edge Select Register; 0x0000184E */
volatile PTCPESTR _PTCPE;                                  /* Port C Pull Enable Register; 0x00001850 */
volatile PTCSESTR _PTCSE;                                  /* Port C Slew Rate Enable Register; 0x00001851 */
volatile PTCDSSTR _PTCDS;                                  /* Port C Drive Strength Selection Register; 0x00001852 */
volatile PTDPESTR _PTDPE;                                  /* Port D Pull Enable Register; 0x00001858 */
volatile PTDSESTR _PTDSE;                                  /* Port D Slew Rate Enable Register; 0x00001859 */
volatile PTDDSSTR _PTDDS;                                  /* Port D Drive Strength Selection Register; 0x0000185A */
volatile PTDSCSTR _PTDSC;                                  /* Port D Interrupt Status and Control Register; 0x0000185C */
volatile PTDPSSTR _PTDPS;                                  /* Port D Interrupt Pin Select Register; 0x0000185D */
volatile PTDESSTR _PTDES;                                  /* Port D Interrupt Edge Select Register; 0x0000185E */
volatile PTEPESTR _PTEPE;                                  /* Port E Pull Enable Register; 0x00001860 */
volatile PTESESTR _PTESE;                                  /* Port E Slew Rate Enable Register; 0x00001861 */
volatile PTEDSSTR _PTEDS;                                  /* Port E Drive Strength Selection Register; 0x00001862 */
volatile PTFPESTR _PTFPE;                                  /* Port F Pull Enable Register; 0x00001868 */
volatile PTFSESTR _PTFSE;                                  /* Port F Slew Rate Enable Register; 0x00001869 */
volatile PTFDSSTR _PTFDS;                                  /* Port F Drive Strength Selection Register; 0x0000186A */
volatile PTGPESTR _PTGPE;                                  /* Port G Pull Enable Register; 0x00001870 */
volatile PTGSESTR _PTGSE;                                  /* Port G Slew Rate Enable Register; 0x00001871 */
volatile PTGDSSTR _PTGDS;                                  /* Port G Drive Strength Selection Register; 0x00001872 */
volatile CANCTL0STR _CANCTL0;                              /* MSCAN Control 0 Register; 0x00001880 */
volatile CANCTL1STR _CANCTL1;                              /* MSCAN Control 1 Register; 0x00001881 */
volatile CANBTR0STR _CANBTR0;                              /* MSCAN Bus Timing Register 0; 0x00001882 */
volatile CANBTR1STR _CANBTR1;                              /* MSCAN Bus Timing Register 1; 0x00001883 */
volatile CANRFLGSTR _CANRFLG;                              /* MSCAN Receiver Flag Register; 0x00001884 */
volatile CANRIERSTR _CANRIER;                              /* MSCAN Receiver Interrupt Enable Register; 0x00001885 */
volatile CANTFLGSTR _CANTFLG;                              /* MSCAN Transmitter Flag Register; 0x00001886 */
volatile CANTIERSTR _CANTIER;                              /* MSCAN Transmitter Interrupt Enable Register; 0x00001887 */
volatile CANTARQSTR _CANTARQ;                              /* MSCAN Transmitter Message Abort Request; 0x00001888 */
volatile CANTAAKSTR _CANTAAK;                              /* MSCAN Transmitter Message Abort Acknowledge; 0x00001889 */
volatile CANTBSELSTR _CANTBSEL;                            /* MSCAN Transmit Buffer Selection; 0x0000188A */
volatile CANIDACSTR _CANIDAC;                              /* MSCAN Identifier Acceptance Control Register; 0x0000188B */
volatile CANMISCSTR _CANMISC;                              /* MSCAN Miscellaneous Register; 0x0000188D */
volatile CANRXERRSTR _CANRXERR;                            /* MSCAN Receive Error Counter Register; 0x0000188E */
volatile CANTXERRSTR _CANTXERR;                            /* MSCAN Transmit Error Counter Register; 0x0000188F */
volatile CANIDAR0STR _CANIDAR0;                            /* MSCAN Identifier Acceptance Register 0; 0x00001890 */
volatile CANIDAR1STR _CANIDAR1;                            /* MSCAN Identifier Acceptance Register 1; 0x00001891 */
volatile CANIDAR2STR _CANIDAR2;                            /* MSCAN Identifier Acceptance Register 2; 0x00001892 */
volatile CANIDAR3STR _CANIDAR3;                            /* MSCAN Identifier Acceptance Register 3; 0x00001893 */
volatile CANIDMR0STR _CANIDMR0;                            /* MSCAN Identifier Mask Register 0; 0x00001894 */
volatile CANIDMR1STR _CANIDMR1;                            /* MSCAN Identifier Mask Register 1; 0x00001895 */
volatile CANIDMR2STR _CANIDMR2;                            /* MSCAN Identifier Mask Register 2; 0x00001896 */
volatile CANIDMR3STR _CANIDMR3;                            /* MSCAN Identifier Mask Register 3; 0x00001897 */
volatile CANIDAR4STR _CANIDAR4;                            /* MSCAN Identifier Acceptance Register 4; 0x00001898 */
volatile CANIDAR5STR _CANIDAR5;                            /* MSCAN Identifier Acceptance Register 5; 0x00001899 */
volatile CANIDAR6STR _CANIDAR6;                            /* MSCAN Identifier Acceptance Register 6; 0x0000189A */
volatile CANIDAR7STR _CANIDAR7;                            /* MSCAN Identifier Acceptance Register 7; 0x0000189B */
volatile CANIDMR4STR _CANIDMR4;                            /* MSCAN Identifier Mask Register 4; 0x0000189C */
volatile CANIDMR5STR _CANIDMR5;                            /* MSCAN Identifier Mask Register 5; 0x0000189D */
volatile CANIDMR6STR _CANIDMR6;                            /* MSCAN Identifier Mask Register 6; 0x0000189E */
volatile CANIDMR7STR _CANIDMR7;                            /* MSCAN Identifier Mask Register 7; 0x0000189F */
volatile CANRDSR0STR _CANRDSR0;                            /* MSCAN Receive Data Segment Register 0; 0x000018A4 */
volatile CANRDSR1STR _CANRDSR1;                            /* MSCAN Receive Data Segment Register 1; 0x000018A5 */
volatile CANRDSR2STR _CANRDSR2;                            /* MSCAN Receive Data Segment Register 2; 0x000018A6 */
volatile CANRDSR3STR _CANRDSR3;                            /* MSCAN Receive Data Segment Register 3; 0x000018A7 */
volatile CANRDSR4STR _CANRDSR4;                            /* MSCAN Receive Data Segment Register 4; 0x000018A8 */
volatile CANRDSR5STR _CANRDSR5;                            /* MSCAN Receive Data Segment Register 5; 0x000018A9 */
volatile CANRDSR6STR _CANRDSR6;                            /* MSCAN Receive Data Segment Register 6; 0x000018AA */
volatile CANRDSR7STR _CANRDSR7;                            /* MSCAN Receive Data Segment Register 7; 0x000018AB */
volatile CANRDLRSTR _CANRDLR;                              /* MSCAN Receive Data Length Register; 0x000018AC */
volatile CANTDSR0STR _CANTDSR0;                            /* MSCAN Transmit Data Segment Register 0; 0x000018B4 */
volatile CANTDSR1STR _CANTDSR1;                            /* MSCAN Transmit Data Segment Register 1; 0x000018B5 */
volatile CANTDSR2STR _CANTDSR2;                            /* MSCAN Transmit Data Segment Register 2; 0x000018B6 */
volatile CANTDSR3STR _CANTDSR3;                            /* MSCAN Transmit Data Segment Register 3; 0x000018B7 */
volatile CANTDSR4STR _CANTDSR4;                            /* MSCAN Transmit Data Segment Register 4; 0x000018B8 */
volatile CANTDSR5STR _CANTDSR5;                            /* MSCAN Transmit Data Segment Register 5; 0x000018B9 */
volatile CANTDSR6STR _CANTDSR6;                            /* MSCAN Transmit Data Segment Register 6; 0x000018BA */
volatile CANTDSR7STR _CANTDSR7;                            /* MSCAN Transmit Data Segment Register 7; 0x000018BB */
volatile CANTDLRSTR _CANTDLR;                              /* MSCAN Transmit Data Length Register; 0x000018BC */
volatile CANTTBPRSTR _CANTTBPR;                            /* MSCAN Transmit Buffer Priority; 0x000018BD */
/* NVFTRIM - macro for reading non volatile register       Nonvolatile MCG Fine Trim; 0x0000FFAE */
/* Tip for register initialization in the user code:  const byte NVFTRIM_INIT @0x0000FFAE = <NVFTRIM_INITVAL>; */
/* NVMCGTRM - macro for reading non volatile register      Nonvolatile MCG Trim Register; 0x0000FFAF */
/* Tip for register initialization in the user code:  const byte NVMCGTRM_INIT @0x0000FFAF = <NVMCGTRM_INITVAL>; */
/* NVBACKKEY0 - macro for reading non volatile register    Backdoor Comparison Key 0; 0x0000FFB0 */
/* Tip for register initialization in the user code:  const byte NVBACKKEY0_INIT @0x0000FFB0 = <NVBACKKEY0_INITVAL>; */
/* NVBACKKEY1 - macro for reading non volatile register    Backdoor Comparison Key 1; 0x0000FFB1 */
/* Tip for register initialization in the user code:  const byte NVBACKKEY1_INIT @0x0000FFB1 = <NVBACKKEY1_INITVAL>; */
/* NVBACKKEY2 - macro for reading non volatile register    Backdoor Comparison Key 2; 0x0000FFB2 */
/* Tip for register initialization in the user code:  const byte NVBACKKEY2_INIT @0x0000FFB2 = <NVBACKKEY2_INITVAL>; */
/* NVBACKKEY3 - macro for reading non volatile register    Backdoor Comparison Key 3; 0x0000FFB3 */
/* Tip for register initialization in the user code:  const byte NVBACKKEY3_INIT @0x0000FFB3 = <NVBACKKEY3_INITVAL>; */
/* NVBACKKEY4 - macro for reading non volatile register    Backdoor Comparison Key 4; 0x0000FFB4 */
/* Tip for register initialization in the user code:  const byte NVBACKKEY4_INIT @0x0000FFB4 = <NVBACKKEY4_INITVAL>; */
/* NVBACKKEY5 - macro for reading non volatile register    Backdoor Comparison Key 5; 0x0000FFB5 */
/* Tip for register initialization in the user code:  const byte NVBACKKEY5_INIT @0x0000FFB5 = <NVBACKKEY5_INITVAL>; */
/* NVBACKKEY6 - macro for reading non volatile register    Backdoor Comparison Key 6; 0x0000FFB6 */
/* Tip for register initialization in the user code:  const byte NVBACKKEY6_INIT @0x0000FFB6 = <NVBACKKEY6_INITVAL>; */
/* NVBACKKEY7 - macro for reading non volatile register    Backdoor Comparison Key 7; 0x0000FFB7 */
/* Tip for register initialization in the user code:  const byte NVBACKKEY7_INIT @0x0000FFB7 = <NVBACKKEY7_INITVAL>; */
/* NVPROT - macro for reading non volatile register        Nonvolatile FLASH Protection Register; 0x0000FFBD */
/* Tip for register initialization in the user code:  const byte NVPROT_INIT @0x0000FFBD = <NVPROT_INITVAL>; */
/* NVOPT - macro for reading non volatile register         Nonvolatile FLASH Options Register; 0x0000FFBF */
/* Tip for register initialization in the user code:  const byte NVOPT_INIT @0x0000FFBF = <NVOPT_INITVAL>; */


/* * * * *  16-BIT REGISTERS  * * * * * * * * * * * * * * * */
volatile ADCRSTR _ADCR;                                    /* Data Result Register; 0x00000012 */
volatile ADCCVSTR _ADCCV;                                  /* Compare Value Register; 0x00000014 */
volatile TPM1CNTSTR _TPM1CNT;                              /* TPM1 Timer Counter Register; 0x00000021 */
volatile TPM1MODSTR _TPM1MOD;                              /* TPM1 Timer Counter Modulo Register; 0x00000023 */
volatile TPM1C0VSTR _TPM1C0V;                              /* TPM1 Timer Channel 0 Value Register; 0x00000026 */
volatile TPM1C1VSTR _TPM1C1V;                              /* TPM1 Timer Channel 1 Value Register; 0x00000029 */
volatile TPM1C2VSTR _TPM1C2V;                              /* TPM1 Timer Channel 2 Value Register; 0x0000002C */
volatile TPM1C3VSTR _TPM1C3V;                              /* TPM1 Timer Channel 3 Value Register; 0x0000002F */
volatile TPM1C4VSTR _TPM1C4V;                              /* TPM1 Timer Channel 4 Value Register; 0x00000032 */
volatile TPM1C5VSTR _TPM1C5V;                              /* TPM1 Timer Channel 5 Value Register; 0x00000035 */
volatile SCI1BDSTR _SCI1BD;                                /* SCI1 Baud Rate Register; 0x00000038 */
volatile SCI2BDSTR _SCI2BD;                                /* SCI2 Baud Rate Register; 0x00000040 */
volatile TPM2CNTSTR _TPM2CNT;                              /* TPM2 Timer Counter Register; 0x00000061 */
volatile TPM2MODSTR _TPM2MOD;                              /* TPM2 Timer Counter Modulo Register; 0x00000063 */
volatile TPM2C0VSTR _TPM2C0V;                              /* TPM2 Timer Channel 0 Value Register; 0x00000066 */
volatile TPM2C1VSTR _TPM2C1V;                              /* TPM2 Timer Channel 1 Value Register; 0x00000069 */
volatile SDIDSTR _SDID;                                    /* System Device Identification Register; 0x00001806 */
volatile DBGCASTR _DBGCA;                                  /* Debug Comparator A Register; 0x00001810 */
volatile DBGCBSTR _DBGCB;                                  /* Debug Comparator B Register; 0x00001812 */
volatile DBGFSTR _DBGF;                                    /* Debug FIFO Register; 0x00001814 */
volatile CANRTSRSTR _CANRTSR;                              /* MSCAN Receive Time Stamp Register; 0x000018AE */
volatile CANTTSRSTR _CANTTSR;                              /* MSCAN Transmit Time Stamp Register; 0x000018BE */


/* * * * *  32-BIT REGISTERS  * * * * * * * * * * * * * * * */
volatile CANRIDRSTR _CANRIDR;                              /* MSCAN 0 Receive Identifier Register; 0x000018A0 */
volatile CANTIDRSTR _CANTIDR;                              /* MSCAN 0 Transmit Identifier Register; 0x000018B0 */

/*lint -restore */

/* EOF */
