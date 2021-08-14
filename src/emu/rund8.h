#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
    nextop = F8;
    switch(nextop) {
        case 0xC0:
        case 0xC1:
        case 0xC2:
        case 0xC3:
        case 0xC4:
        case 0xC5:
        case 0xC6:
        case 0xC7:  /* FADD */
            ST0.d += ST(nextop&7).d;
            break;
        case 0xC8:
        case 0xC9:
        case 0xCA:
        case 0xCB:
        case 0xCC:
        case 0xCD:
        case 0xCE:
        case 0xCF:  /* FMUL */
            ST0.d *= ST(nextop&7).d;
            break;
        case 0xD0:
        case 0xD1:
        case 0xD2:
        case 0xD3:
        case 0xD4:
        case 0xD5:
        case 0xD6:
        case 0xD7:  /* FCOM */
            fpu_fcom(emu, ST(nextop&7).d);
            break;
        case 0xD8:
        case 0xD9:
        case 0xDA:
        case 0xDB:
        case 0xDC:
        case 0xDD:
        case 0xDE:
        case 0xDF:  /* FCOMP */
            fpu_fcom(emu, ST(nextop&7).d);
            fpu_do_pop(emu);
            break;
        case 0xE0:
        case 0xE1:
        case 0xE2:
        case 0xE3:
        case 0xE4:
        case 0xE5:
        case 0xE6:
        case 0xE7:  /* FSUB */
            ST0.d -= ST(nextop&7).d;
            break;
        case 0xE8:
        case 0xE9:
        case 0xEA:
        case 0xEB:
        case 0xEC:
        case 0xED:
        case 0xEE:
        case 0xEF:  /* FSUBR */
            ST0.d = ST(nextop&7).d - ST0.d;
            break;
        case 0xF0:
        case 0xF1:
        case 0xF2:
        case 0xF3:
        case 0xF4:
        case 0xF5:
        case 0xF6:
        case 0xF7:  /* FDIV */
            ST0.d /= ST(nextop&7).d;
            break;
        case 0xF8:
        case 0xF9:
        case 0xFA:
        case 0xFB:
        case 0xFC:
        case 0xFD:
        case 0xFE:
        case 0xFF:  /* FDIVR */
            ST0.d = ST(nextop&7).d / ST0.d;
            break;
        default:
        switch((nextop>>3)&7) {
            case 0:         /* FADD ST0, float */
                GET_ED;
                if(!(((uintptr_t)ED)&3))
                    ST0.d += *(float*)ED;
                else {
                    memcpy(&f, ED, sizeof(float));
                    ST0.d += f;
                }
                break;
            case 1:         /* FMUL ST0, float */
                GET_ED;
                if(!(((uintptr_t)ED)&3))
                    ST0.d *= *(float*)ED;
                else {
                    memcpy(&f, ED, sizeof(float));
                    ST0.d *= f;
                }
                break;
            case 2:      /* FCOM ST0, float */
                GET_ED;
                if(!(((uintptr_t)ED)&3))
                    fpu_fcom(emu, *(float*)ED);
                else {
                    memcpy(&f, ED, sizeof(float));
                    fpu_fcom(emu, f);
                }
                break;
            case 3:     /* FCOMP */
                GET_ED;
                if(!(((uintptr_t)ED)&3))
                    fpu_fcom(emu, *(float*)ED);
                else {
                    memcpy(&f, ED, sizeof(float));
                    fpu_fcom(emu, f);
                }
                fpu_do_pop(emu);
                break;
            case 4:         /* FSUB ST0, float */
                GET_ED;
                if(!(((uintptr_t)ED)&3))
                    ST0.d -= *(float*)ED;
                else {
                    memcpy(&f, ED, sizeof(float));
                    ST0.d -= f;
                }
                break;
            case 5:         /* FSUBR ST0, float */
                GET_ED;
                if(!(((uintptr_t)ED)&3))
                    ST0.d = *(float*)ED - ST0.d;
                else {
                    memcpy(&f, ED, sizeof(float));
                    ST0.d = f - ST0.d;
                }
                break;
            case 6:         /* FDIV ST0, float */
                GET_ED;
                if(!(((uintptr_t)ED)&3))
                    ST0.d /= *(float*)ED;
                else {
                    memcpy(&f, ED, sizeof(float));
                    ST0.d /= f;
                }
                break;
            case 7:         /* FDIVR ST0, float */
                GET_ED;
                if(!(((uintptr_t)ED)&3))
                    ST0.d = *(float*)ED / ST0.d;
                else {
                    memcpy(&f, ED, sizeof(float));
                    ST0.d = f / ST0.d;
                }
                break;
            default:
                goto _default;
        }
    }
#pragma GCC diagnostic pop
