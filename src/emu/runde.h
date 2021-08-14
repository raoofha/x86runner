    nextop = F8;
    switch (nextop) {
    case 0xC0:  /* FADDP STx, ST0 */
    case 0xC1:  /* FADDP ST1, ST0 */
    case 0xC2:
    case 0xC3:
    case 0xC4:
    case 0xC5:
    case 0xC6:
    case 0xC7:
        ST(nextop&7).d += ST0.d;
        fpu_do_pop(emu);
        break;
    case 0xC8:  /* FMULP STx, ST0 */
    case 0xC9:  /* FMULP ST1, ST0 */
    case 0xCA:
    case 0xCB:
    case 0xCC:
    case 0xCD:
    case 0xCE:
    case 0xCF:
        ST(nextop&7).d *= ST0.d;
        fpu_do_pop(emu);
        break;
    case 0xD0:
    case 0xD1:
    case 0xD2:
    case 0xD3:
    case 0xD4:
    case 0xD5:
    case 0xD6:
    case 0xD7:  /* FCOMP */
        fpu_fcom(emu, ST(nextop&7).d);
        fpu_do_pop(emu);
        break;

    case 0xD9:  /* FCOMPP */
        fpu_fcom(emu, ST1.d);
        fpu_do_pop(emu);
        fpu_do_pop(emu);
        break;

        /*ST(1).d = ST0.d - ST(1).d;
        fpu_do_pop(emu);
        break;*/
    case 0xE0:  /* FSUBRP STx, ST0 */
    case 0xE1:  /* FSUBRP ST1, ST0 */
    case 0xE2:
    case 0xE3:
    case 0xE4:
    case 0xE5:
    case 0xE6:
    case 0xE7:
        ST(nextop&7).d = ST0.d - ST(nextop&7).d;
        fpu_do_pop(emu);
        break;
    case 0xE8:  /* FSUBP STx, ST0 */
    case 0xE9:  /* FSUBP ST1, ST0 */
    case 0xEA:
    case 0xEB:
    case 0xEC:
    case 0xED:
    case 0xEE:
    case 0xEF:
        ST(nextop&7).d -= ST0.d;
        fpu_do_pop(emu);
        break;
    case 0xF0:  /* FDIVRP STx, ST0 */
    case 0xF1:  /* FDIVRP ST1, ST0 */
    case 0xF2:
    case 0xF3:
    case 0xF4:
    case 0xF5:
    case 0xF6:
    case 0xF7:
        ST(nextop&7).d = ST0.d / ST(nextop&7).d;
        fpu_do_pop(emu);
        break;
    case 0xF8:  /* FDIVP STx, ST0 */
    case 0xF9:  /* FDIVP ST1, ST0 */
    case 0xFA:
    case 0xFB:
    case 0xFC:
    case 0xFD:
    case 0xFE:
    case 0xFF:
        ST(nextop&7).d /= ST0.d;
        fpu_do_pop(emu);
        break;

    case 0xD8:  
    case 0xDA:
    case 0xDB:
    case 0xDC:
    case 0xDD:
    case 0xDE:
    case 0xDF:
        goto _default;
    
    default:
        switch((nextop>>3)&7) {
            case 0:     /* FIADD ST0, Ew int */
                GET_EW;
                ST0.d += EW->sword[0];
                break;
            case 1:     /* FIMUL ST0, Ew int */
                GET_EW;
                ST0.d *= EW->sword[0];
                break;
            case 4:     /* FISUB ST0, Ew int */
                GET_EW;
                ST0.d -= EW->sword[0];
                break;
            case 5:     /* FISUBR ST0, Ew int */
                GET_EW;
                ST0.d = (double)EW->sword[0] - ST0.d;
                break;
            case 6:     /* FIDIV ST0, Ew int */
                GET_EW;
                ST0.d /= EW->sword[0];
                break;
            case 7:     /* FIDIVR ST0, Ew int */
                GET_EW;
                ST0.d = (double)EW->sword[0] / ST0.d;
                break;
        default:
            goto _default;
        }
    }
