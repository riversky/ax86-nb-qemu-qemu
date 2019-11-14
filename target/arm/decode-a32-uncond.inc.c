/* This file is autogenerated by scripts/decodetree.py.  */

typedef struct {
    int A;
    int F;
    int I;
    int M;
    int imod;
    int mode;
} arg_cps;

typedef struct {
    int pu;
    int rn;
    int w;
} arg_rfe;

typedef struct {
    int E;
} arg_setend;

typedef struct {
    int mode;
    int pu;
    int w;
} arg_srs;

#ifdef CONFIG_PRAGMA_DIAGNOSTIC_AVAILABLE
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wredundant-decls"
# ifdef __clang__
#  pragma GCC diagnostic ignored "-Wtypedef-redefinition"
# endif
#endif

typedef arg_i arg_BLX_i;
static bool trans_BLX_i(DisasContext *ctx, arg_BLX_i *a);
typedef arg_rfe arg_RFE;
static bool trans_RFE(DisasContext *ctx, arg_RFE *a);
typedef arg_srs arg_SRS;
static bool trans_SRS(DisasContext *ctx, arg_SRS *a);
typedef arg_cps arg_CPS;
static bool trans_CPS(DisasContext *ctx, arg_CPS *a);
typedef arg_empty arg_CLREX;
static bool trans_CLREX(DisasContext *ctx, arg_CLREX *a);
typedef arg_empty arg_DSB;
static bool trans_DSB(DisasContext *ctx, arg_DSB *a);
typedef arg_empty arg_DMB;
static bool trans_DMB(DisasContext *ctx, arg_DMB *a);
typedef arg_empty arg_ISB;
static bool trans_ISB(DisasContext *ctx, arg_ISB *a);
typedef arg_empty arg_SB;
static bool trans_SB(DisasContext *ctx, arg_SB *a);
typedef arg_setend arg_SETEND;
static bool trans_SETEND(DisasContext *ctx, arg_SETEND *a);
typedef arg_empty arg_PLD;
static bool trans_PLD(DisasContext *ctx, arg_PLD *a);
typedef arg_empty arg_PLDW;
static bool trans_PLDW(DisasContext *ctx, arg_PLDW *a);
typedef arg_empty arg_PLI;
static bool trans_PLI(DisasContext *ctx, arg_PLI *a);

#ifdef CONFIG_PRAGMA_DIAGNOSTIC_AVAILABLE
# pragma GCC diagnostic pop
#endif

static void disas_a32_uncond_extract_disas_a32_uncond_Fmt_0(DisasContext *ctx, arg_i *a, uint32_t insn)
{
    a->imm = times_2(ctx, deposit32(extract32(insn, 24, 1), 1, 31, sextract32(insn, 0, 24)));
}

static void disas_a32_uncond_extract_disas_a32_uncond_Fmt_1(DisasContext *ctx, arg_rfe *a, uint32_t insn)
{
    a->pu = extract32(insn, 23, 2);
    a->w = extract32(insn, 21, 1);
    a->rn = extract32(insn, 16, 4);
}

static void disas_a32_uncond_extract_disas_a32_uncond_Fmt_2(DisasContext *ctx, arg_srs *a, uint32_t insn)
{
    a->pu = extract32(insn, 23, 2);
    a->w = extract32(insn, 21, 1);
    a->mode = extract32(insn, 0, 5);
}

static void disas_a32_uncond_extract_disas_a32_uncond_Fmt_3(DisasContext *ctx, arg_cps *a, uint32_t insn)
{
    a->imod = extract32(insn, 18, 2);
    a->M = extract32(insn, 17, 1);
    a->A = extract32(insn, 8, 1);
    a->I = extract32(insn, 7, 1);
    a->F = extract32(insn, 6, 1);
    a->mode = extract32(insn, 0, 5);
}

static void disas_a32_uncond_extract_disas_a32_uncond_Fmt_4(DisasContext *ctx, arg_empty *a, uint32_t insn)
{
}

static void disas_a32_uncond_extract_disas_a32_uncond_Fmt_5(DisasContext *ctx, arg_setend *a, uint32_t insn)
{
    a->E = extract32(insn, 9, 1);
}

static bool disas_a32_uncond(DisasContext *ctx, uint32_t insn)
{
    union {
        arg_cps f_cps;
        arg_empty f_empty;
        arg_i f_i;
        arg_rfe f_rfe;
        arg_setend f_setend;
        arg_srs f_srs;
    } u;

    switch ((insn >> 25) & 0x7f) {
    case 0x78:
        /* 1111000. ........ ........ ........ */
        switch (insn & 0x01f1fc20) {
        case 0x01000000:
            /* 11110001 0000...0 000000.. ..0..... */
            disas_a32_uncond_extract_disas_a32_uncond_Fmt_3(ctx, &u.f_cps, insn);
            switch ((insn >> 9) & 0x1) {
            case 0x0:
                /* 11110001 0000...0 0000000. ..0..... */
                /* /home/goffioul/Sources/Lincor/local/android/android-x86-10/vendor/lincor/ls1853/libunb/qemu/target/arm/a32-uncond.decode:43 */
                if (trans_CPS(ctx, &u.f_cps)) return true;
                return false;
            }
            return false;
        case 0x01010000:
            /* 11110001 0000...1 000000.. ..0..... */
            disas_a32_uncond_extract_disas_a32_uncond_Fmt_5(ctx, &u.f_setend, insn);
            switch (insn & 0x000e01df) {
            case 0x00000000:
                /* 11110001 00000001 000000.0 00000000 */
                /* /home/goffioul/Sources/Lincor/local/android/android-x86-10/vendor/lincor/ls1853/libunb/qemu/target/arm/a32-uncond.decode:56 */
                if (trans_SETEND(ctx, &u.f_setend)) return true;
                return false;
            }
            return false;
        }
        return false;
    case 0x7a:
        /* 1111010. ........ ........ ........ */
        disas_a32_uncond_extract_disas_a32_uncond_Fmt_4(ctx, &u.f_empty, insn);
        switch (insn & 0x01700000) {
        case 0x00100000:
            /* 11110100 .001.... ........ ........ */
            /* /home/goffioul/Sources/Lincor/local/android/android-x86-10/vendor/lincor/ls1853/libunb/qemu/target/arm/a32-uncond.decode:73 */
            if (trans_PLDW(ctx, &u.f_empty)) return true;
            return false;
        case 0x00500000:
            /* 11110100 .101.... ........ ........ */
            switch ((insn >> 12) & 0xf) {
            case 0xf:
                /* 11110100 .101.... 1111.... ........ */
                /* /home/goffioul/Sources/Lincor/local/android/android-x86-10/vendor/lincor/ls1853/libunb/qemu/target/arm/a32-uncond.decode:62 */
                if (trans_PLI(ctx, &u.f_empty)) return true;
                return false;
            }
            return false;
        case 0x01100000:
            /* 11110101 .001.... ........ ........ */
            switch ((insn >> 12) & 0xf) {
            case 0xf:
                /* 11110101 .001.... 1111.... ........ */
                /* /home/goffioul/Sources/Lincor/local/android/android-x86-10/vendor/lincor/ls1853/libunb/qemu/target/arm/a32-uncond.decode:61 */
                if (trans_PLDW(ctx, &u.f_empty)) return true;
                return false;
            }
            return false;
        case 0x01500000:
            /* 11110101 .101.... ........ ........ */
            switch ((insn >> 12) & 0xf) {
            case 0xf:
                /* 11110101 .101.... 1111.... ........ */
                /* /home/goffioul/Sources/Lincor/local/android/android-x86-10/vendor/lincor/ls1853/libunb/qemu/target/arm/a32-uncond.decode:60 */
                if (trans_PLD(ctx, &u.f_empty)) return true;
                return false;
            }
            return false;
        case 0x01700000:
            /* 11110101 .111.... ........ ........ */
            switch (insn & 0x008ffff0) {
            case 0x000ff010:
                /* 11110101 01111111 11110000 0001.... */
                switch (insn & 0x0000000f) {
                case 0x0000000f:
                    /* 11110101 01111111 11110000 00011111 */
                    /* /home/goffioul/Sources/Lincor/local/android/android-x86-10/vendor/lincor/ls1853/libunb/qemu/target/arm/a32-uncond.decode:49 */
                    if (trans_CLREX(ctx, &u.f_empty)) return true;
                    return false;
                }
                return false;
            case 0x000ff040:
                /* 11110101 01111111 11110000 0100.... */
                /* /home/goffioul/Sources/Lincor/local/android/android-x86-10/vendor/lincor/ls1853/libunb/qemu/target/arm/a32-uncond.decode:50 */
                if (trans_DSB(ctx, &u.f_empty)) return true;
                return false;
            case 0x000ff050:
                /* 11110101 01111111 11110000 0101.... */
                /* /home/goffioul/Sources/Lincor/local/android/android-x86-10/vendor/lincor/ls1853/libunb/qemu/target/arm/a32-uncond.decode:51 */
                if (trans_DMB(ctx, &u.f_empty)) return true;
                return false;
            case 0x000ff060:
                /* 11110101 01111111 11110000 0110.... */
                /* /home/goffioul/Sources/Lincor/local/android/android-x86-10/vendor/lincor/ls1853/libunb/qemu/target/arm/a32-uncond.decode:52 */
                if (trans_ISB(ctx, &u.f_empty)) return true;
                return false;
            case 0x000ff070:
                /* 11110101 01111111 11110000 0111.... */
                switch (insn & 0x0000000f) {
                case 0x00000000:
                    /* 11110101 01111111 11110000 01110000 */
                    /* /home/goffioul/Sources/Lincor/local/android/android-x86-10/vendor/lincor/ls1853/libunb/qemu/target/arm/a32-uncond.decode:53 */
                    if (trans_SB(ctx, &u.f_empty)) return true;
                    return false;
                }
                return false;
            }
            return false;
        }
        return false;
    case 0x7b:
        /* 1111011. ........ ........ ........ */
        disas_a32_uncond_extract_disas_a32_uncond_Fmt_4(ctx, &u.f_empty, insn);
        switch (insn & 0x01700010) {
        case 0x00100000:
            /* 11110110 .001.... ........ ...0.... */
            /* /home/goffioul/Sources/Lincor/local/android/android-x86-10/vendor/lincor/ls1853/libunb/qemu/target/arm/a32-uncond.decode:74 */
            if (trans_PLDW(ctx, &u.f_empty)) return true;
            return false;
        case 0x00500000:
            /* 11110110 .101.... ........ ...0.... */
            switch ((insn >> 12) & 0xf) {
            case 0xf:
                /* 11110110 .101.... 1111.... ...0.... */
                /* /home/goffioul/Sources/Lincor/local/android/android-x86-10/vendor/lincor/ls1853/libunb/qemu/target/arm/a32-uncond.decode:66 */
                if (trans_PLI(ctx, &u.f_empty)) return true;
                return false;
            }
            return false;
        case 0x01100000:
            /* 11110111 .001.... ........ ...0.... */
            switch ((insn >> 12) & 0xf) {
            case 0xf:
                /* 11110111 .001.... 1111.... ...0.... */
                /* /home/goffioul/Sources/Lincor/local/android/android-x86-10/vendor/lincor/ls1853/libunb/qemu/target/arm/a32-uncond.decode:65 */
                if (trans_PLDW(ctx, &u.f_empty)) return true;
                return false;
            }
            return false;
        case 0x01500000:
            /* 11110111 .101.... ........ ...0.... */
            switch ((insn >> 12) & 0xf) {
            case 0xf:
                /* 11110111 .101.... 1111.... ...0.... */
                /* /home/goffioul/Sources/Lincor/local/android/android-x86-10/vendor/lincor/ls1853/libunb/qemu/target/arm/a32-uncond.decode:64 */
                if (trans_PLD(ctx, &u.f_empty)) return true;
                return false;
            }
            return false;
        }
        return false;
    case 0x7c:
        /* 1111100. ........ ........ ........ */
        switch (insn & 0x0050ffe0) {
        case 0x00100a00:
            /* 1111100. .0.1.... 00001010 000..... */
            disas_a32_uncond_extract_disas_a32_uncond_Fmt_1(ctx, &u.f_rfe, insn);
            switch (insn & 0x0000001f) {
            case 0x00000000:
                /* 1111100. .0.1.... 00001010 00000000 */
                /* /home/goffioul/Sources/Lincor/local/android/android-x86-10/vendor/lincor/ls1853/libunb/qemu/target/arm/a32-uncond.decode:41 */
                if (trans_RFE(ctx, &u.f_rfe)) return true;
                return false;
            }
            return false;
        case 0x00400500:
            /* 1111100. .1.0.... 00000101 000..... */
            disas_a32_uncond_extract_disas_a32_uncond_Fmt_2(ctx, &u.f_srs, insn);
            switch ((insn >> 16) & 0xf) {
            case 0xd:
                /* 1111100. .1.01101 00000101 000..... */
                /* /home/goffioul/Sources/Lincor/local/android/android-x86-10/vendor/lincor/ls1853/libunb/qemu/target/arm/a32-uncond.decode:42 */
                if (trans_SRS(ctx, &u.f_srs)) return true;
                return false;
            }
            return false;
        }
        return false;
    case 0x7d:
        /* 1111101. ........ ........ ........ */
        /* /home/goffioul/Sources/Lincor/local/android/android-x86-10/vendor/lincor/ls1853/libunb/qemu/target/arm/a32-uncond.decode:33 */
        disas_a32_uncond_extract_disas_a32_uncond_Fmt_0(ctx, &u.f_i, insn);
        if (trans_BLX_i(ctx, &u.f_i)) return true;
        return false;
    }
    return false;
}
