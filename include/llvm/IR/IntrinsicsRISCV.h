/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Intrinsic Function Source Fragment                                         *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifndef LLVM_IR_INTRINSIC_RISCV_ENUMS_H
#define LLVM_IR_INTRINSIC_RISCV_ENUMS_H

namespace llvm {
namespace Intrinsic {
enum RISCVIntrinsics : unsigned {
// Enum values for intrinsics
    riscv_masked_atomicrmw_add_i32 = 6692,            // llvm.riscv.masked.atomicrmw.add.i32
    riscv_masked_atomicrmw_add_i64,            // llvm.riscv.masked.atomicrmw.add.i64
    riscv_masked_atomicrmw_max_i32,            // llvm.riscv.masked.atomicrmw.max.i32
    riscv_masked_atomicrmw_max_i64,            // llvm.riscv.masked.atomicrmw.max.i64
    riscv_masked_atomicrmw_min_i32,            // llvm.riscv.masked.atomicrmw.min.i32
    riscv_masked_atomicrmw_min_i64,            // llvm.riscv.masked.atomicrmw.min.i64
    riscv_masked_atomicrmw_nand_i32,           // llvm.riscv.masked.atomicrmw.nand.i32
    riscv_masked_atomicrmw_nand_i64,           // llvm.riscv.masked.atomicrmw.nand.i64
    riscv_masked_atomicrmw_sub_i32,            // llvm.riscv.masked.atomicrmw.sub.i32
    riscv_masked_atomicrmw_sub_i64,            // llvm.riscv.masked.atomicrmw.sub.i64
    riscv_masked_atomicrmw_umax_i32,           // llvm.riscv.masked.atomicrmw.umax.i32
    riscv_masked_atomicrmw_umax_i64,           // llvm.riscv.masked.atomicrmw.umax.i64
    riscv_masked_atomicrmw_umin_i32,           // llvm.riscv.masked.atomicrmw.umin.i32
    riscv_masked_atomicrmw_umin_i64,           // llvm.riscv.masked.atomicrmw.umin.i64
    riscv_masked_atomicrmw_xchg_i32,           // llvm.riscv.masked.atomicrmw.xchg.i32
    riscv_masked_atomicrmw_xchg_i64,           // llvm.riscv.masked.atomicrmw.xchg.i64
    riscv_masked_cmpxchg_i32,                  // llvm.riscv.masked.cmpxchg.i32
    riscv_masked_cmpxchg_i64,                  // llvm.riscv.masked.cmpxchg.i64
    riscv_vaadd,                               // llvm.riscv.vaadd
    riscv_vaadd_mask,                          // llvm.riscv.vaadd.mask
    riscv_vaaddu,                              // llvm.riscv.vaaddu
    riscv_vaaddu_mask,                         // llvm.riscv.vaaddu.mask
    riscv_vadc,                                // llvm.riscv.vadc
    riscv_vadd,                                // llvm.riscv.vadd
    riscv_vadd_mask,                           // llvm.riscv.vadd.mask
    riscv_vamoadd,                             // llvm.riscv.vamoadd
    riscv_vamoadd_mask,                        // llvm.riscv.vamoadd.mask
    riscv_vamoand,                             // llvm.riscv.vamoand
    riscv_vamoand_mask,                        // llvm.riscv.vamoand.mask
    riscv_vamomax,                             // llvm.riscv.vamomax
    riscv_vamomax_mask,                        // llvm.riscv.vamomax.mask
    riscv_vamomaxu,                            // llvm.riscv.vamomaxu
    riscv_vamomaxu_mask,                       // llvm.riscv.vamomaxu.mask
    riscv_vamomin,                             // llvm.riscv.vamomin
    riscv_vamomin_mask,                        // llvm.riscv.vamomin.mask
    riscv_vamominu,                            // llvm.riscv.vamominu
    riscv_vamominu_mask,                       // llvm.riscv.vamominu.mask
    riscv_vamoor,                              // llvm.riscv.vamoor
    riscv_vamoor_mask,                         // llvm.riscv.vamoor.mask
    riscv_vamoswap,                            // llvm.riscv.vamoswap
    riscv_vamoswap_mask,                       // llvm.riscv.vamoswap.mask
    riscv_vamoxor,                             // llvm.riscv.vamoxor
    riscv_vamoxor_mask,                        // llvm.riscv.vamoxor.mask
    riscv_vand,                                // llvm.riscv.vand
    riscv_vand_mask,                           // llvm.riscv.vand.mask
    riscv_vasub,                               // llvm.riscv.vasub
    riscv_vasub_mask,                          // llvm.riscv.vasub.mask
    riscv_vasubu,                              // llvm.riscv.vasubu
    riscv_vasubu_mask,                         // llvm.riscv.vasubu.mask
    riscv_vcompress,                           // llvm.riscv.vcompress
    riscv_vdiv,                                // llvm.riscv.vdiv
    riscv_vdiv_mask,                           // llvm.riscv.vdiv.mask
    riscv_vdivu,                               // llvm.riscv.vdivu
    riscv_vdivu_mask,                          // llvm.riscv.vdivu.mask
    riscv_vfadd,                               // llvm.riscv.vfadd
    riscv_vfadd_mask,                          // llvm.riscv.vfadd.mask
    riscv_vfclass,                             // llvm.riscv.vfclass
    riscv_vfclass_mask,                        // llvm.riscv.vfclass.mask
    riscv_vfcvt_f_x_v,                         // llvm.riscv.vfcvt.f.x.v
    riscv_vfcvt_f_x_v_mask,                    // llvm.riscv.vfcvt.f.x.v.mask
    riscv_vfcvt_f_xu_v,                        // llvm.riscv.vfcvt.f.xu.v
    riscv_vfcvt_f_xu_v_mask,                   // llvm.riscv.vfcvt.f.xu.v.mask
    riscv_vfcvt_rtz_x_f_v,                     // llvm.riscv.vfcvt.rtz.x.f.v
    riscv_vfcvt_rtz_x_f_v_mask,                // llvm.riscv.vfcvt.rtz.x.f.v.mask
    riscv_vfcvt_rtz_xu_f_v,                    // llvm.riscv.vfcvt.rtz.xu.f.v
    riscv_vfcvt_rtz_xu_f_v_mask,               // llvm.riscv.vfcvt.rtz.xu.f.v.mask
    riscv_vfcvt_x_f_v,                         // llvm.riscv.vfcvt.x.f.v
    riscv_vfcvt_x_f_v_mask,                    // llvm.riscv.vfcvt.x.f.v.mask
    riscv_vfcvt_xu_f_v,                        // llvm.riscv.vfcvt.xu.f.v
    riscv_vfcvt_xu_f_v_mask,                   // llvm.riscv.vfcvt.xu.f.v.mask
    riscv_vfdiv,                               // llvm.riscv.vfdiv
    riscv_vfdiv_mask,                          // llvm.riscv.vfdiv.mask
    riscv_vfirst,                              // llvm.riscv.vfirst
    riscv_vfirst_mask,                         // llvm.riscv.vfirst.mask
    riscv_vfmacc,                              // llvm.riscv.vfmacc
    riscv_vfmacc_mask,                         // llvm.riscv.vfmacc.mask
    riscv_vfmadd,                              // llvm.riscv.vfmadd
    riscv_vfmadd_mask,                         // llvm.riscv.vfmadd.mask
    riscv_vfmax,                               // llvm.riscv.vfmax
    riscv_vfmax_mask,                          // llvm.riscv.vfmax.mask
    riscv_vfmerge,                             // llvm.riscv.vfmerge
    riscv_vfmin,                               // llvm.riscv.vfmin
    riscv_vfmin_mask,                          // llvm.riscv.vfmin.mask
    riscv_vfmsac,                              // llvm.riscv.vfmsac
    riscv_vfmsac_mask,                         // llvm.riscv.vfmsac.mask
    riscv_vfmsub,                              // llvm.riscv.vfmsub
    riscv_vfmsub_mask,                         // llvm.riscv.vfmsub.mask
    riscv_vfmul,                               // llvm.riscv.vfmul
    riscv_vfmul_mask,                          // llvm.riscv.vfmul.mask
    riscv_vfmv_f_s,                            // llvm.riscv.vfmv.f.s
    riscv_vfmv_s_f,                            // llvm.riscv.vfmv.s.f
    riscv_vfmv_v_f,                            // llvm.riscv.vfmv.v.f
    riscv_vfncvt_f_f_w,                        // llvm.riscv.vfncvt.f.f.w
    riscv_vfncvt_f_f_w_mask,                   // llvm.riscv.vfncvt.f.f.w.mask
    riscv_vfncvt_f_x_w,                        // llvm.riscv.vfncvt.f.x.w
    riscv_vfncvt_f_x_w_mask,                   // llvm.riscv.vfncvt.f.x.w.mask
    riscv_vfncvt_f_xu_w,                       // llvm.riscv.vfncvt.f.xu.w
    riscv_vfncvt_f_xu_w_mask,                  // llvm.riscv.vfncvt.f.xu.w.mask
    riscv_vfncvt_rod_f_f_w,                    // llvm.riscv.vfncvt.rod.f.f.w
    riscv_vfncvt_rod_f_f_w_mask,               // llvm.riscv.vfncvt.rod.f.f.w.mask
    riscv_vfncvt_rtz_x_f_w,                    // llvm.riscv.vfncvt.rtz.x.f.w
    riscv_vfncvt_rtz_x_f_w_mask,               // llvm.riscv.vfncvt.rtz.x.f.w.mask
    riscv_vfncvt_rtz_xu_f_w,                   // llvm.riscv.vfncvt.rtz.xu.f.w
    riscv_vfncvt_rtz_xu_f_w_mask,              // llvm.riscv.vfncvt.rtz.xu.f.w.mask
    riscv_vfncvt_x_f_w,                        // llvm.riscv.vfncvt.x.f.w
    riscv_vfncvt_x_f_w_mask,                   // llvm.riscv.vfncvt.x.f.w.mask
    riscv_vfncvt_xu_f_w,                       // llvm.riscv.vfncvt.xu.f.w
    riscv_vfncvt_xu_f_w_mask,                  // llvm.riscv.vfncvt.xu.f.w.mask
    riscv_vfnmacc,                             // llvm.riscv.vfnmacc
    riscv_vfnmacc_mask,                        // llvm.riscv.vfnmacc.mask
    riscv_vfnmadd,                             // llvm.riscv.vfnmadd
    riscv_vfnmadd_mask,                        // llvm.riscv.vfnmadd.mask
    riscv_vfnmsac,                             // llvm.riscv.vfnmsac
    riscv_vfnmsac_mask,                        // llvm.riscv.vfnmsac.mask
    riscv_vfnmsub,                             // llvm.riscv.vfnmsub
    riscv_vfnmsub_mask,                        // llvm.riscv.vfnmsub.mask
    riscv_vfrdiv,                              // llvm.riscv.vfrdiv
    riscv_vfrdiv_mask,                         // llvm.riscv.vfrdiv.mask
    riscv_vfrec7,                              // llvm.riscv.vfrec7
    riscv_vfrec7_mask,                         // llvm.riscv.vfrec7.mask
    riscv_vfredmax,                            // llvm.riscv.vfredmax
    riscv_vfredmax_mask,                       // llvm.riscv.vfredmax.mask
    riscv_vfredmin,                            // llvm.riscv.vfredmin
    riscv_vfredmin_mask,                       // llvm.riscv.vfredmin.mask
    riscv_vfredosum,                           // llvm.riscv.vfredosum
    riscv_vfredosum_mask,                      // llvm.riscv.vfredosum.mask
    riscv_vfredsum,                            // llvm.riscv.vfredsum
    riscv_vfredsum_mask,                       // llvm.riscv.vfredsum.mask
    riscv_vfrsqrt7,                            // llvm.riscv.vfrsqrt7
    riscv_vfrsqrt7_mask,                       // llvm.riscv.vfrsqrt7.mask
    riscv_vfrsub,                              // llvm.riscv.vfrsub
    riscv_vfrsub_mask,                         // llvm.riscv.vfrsub.mask
    riscv_vfsgnj,                              // llvm.riscv.vfsgnj
    riscv_vfsgnj_mask,                         // llvm.riscv.vfsgnj.mask
    riscv_vfsgnjn,                             // llvm.riscv.vfsgnjn
    riscv_vfsgnjn_mask,                        // llvm.riscv.vfsgnjn.mask
    riscv_vfsgnjx,                             // llvm.riscv.vfsgnjx
    riscv_vfsgnjx_mask,                        // llvm.riscv.vfsgnjx.mask
    riscv_vfslide1down,                        // llvm.riscv.vfslide1down
    riscv_vfslide1down_mask,                   // llvm.riscv.vfslide1down.mask
    riscv_vfslide1up,                          // llvm.riscv.vfslide1up
    riscv_vfslide1up_mask,                     // llvm.riscv.vfslide1up.mask
    riscv_vfsqrt,                              // llvm.riscv.vfsqrt
    riscv_vfsqrt_mask,                         // llvm.riscv.vfsqrt.mask
    riscv_vfsub,                               // llvm.riscv.vfsub
    riscv_vfsub_mask,                          // llvm.riscv.vfsub.mask
    riscv_vfwadd,                              // llvm.riscv.vfwadd
    riscv_vfwadd_mask,                         // llvm.riscv.vfwadd.mask
    riscv_vfwadd_w,                            // llvm.riscv.vfwadd.w
    riscv_vfwadd_w_mask,                       // llvm.riscv.vfwadd.w.mask
    riscv_vfwcvt_f_f_v,                        // llvm.riscv.vfwcvt.f.f.v
    riscv_vfwcvt_f_f_v_mask,                   // llvm.riscv.vfwcvt.f.f.v.mask
    riscv_vfwcvt_f_x_v,                        // llvm.riscv.vfwcvt.f.x.v
    riscv_vfwcvt_f_x_v_mask,                   // llvm.riscv.vfwcvt.f.x.v.mask
    riscv_vfwcvt_f_xu_v,                       // llvm.riscv.vfwcvt.f.xu.v
    riscv_vfwcvt_f_xu_v_mask,                  // llvm.riscv.vfwcvt.f.xu.v.mask
    riscv_vfwcvt_rtz_x_f_v,                    // llvm.riscv.vfwcvt.rtz.x.f.v
    riscv_vfwcvt_rtz_x_f_v_mask,               // llvm.riscv.vfwcvt.rtz.x.f.v.mask
    riscv_vfwcvt_rtz_xu_f_v,                   // llvm.riscv.vfwcvt.rtz.xu.f.v
    riscv_vfwcvt_rtz_xu_f_v_mask,              // llvm.riscv.vfwcvt.rtz.xu.f.v.mask
    riscv_vfwcvt_x_f_v,                        // llvm.riscv.vfwcvt.x.f.v
    riscv_vfwcvt_x_f_v_mask,                   // llvm.riscv.vfwcvt.x.f.v.mask
    riscv_vfwcvt_xu_f_v,                       // llvm.riscv.vfwcvt.xu.f.v
    riscv_vfwcvt_xu_f_v_mask,                  // llvm.riscv.vfwcvt.xu.f.v.mask
    riscv_vfwmacc,                             // llvm.riscv.vfwmacc
    riscv_vfwmacc_mask,                        // llvm.riscv.vfwmacc.mask
    riscv_vfwmsac,                             // llvm.riscv.vfwmsac
    riscv_vfwmsac_mask,                        // llvm.riscv.vfwmsac.mask
    riscv_vfwmul,                              // llvm.riscv.vfwmul
    riscv_vfwmul_mask,                         // llvm.riscv.vfwmul.mask
    riscv_vfwnmacc,                            // llvm.riscv.vfwnmacc
    riscv_vfwnmacc_mask,                       // llvm.riscv.vfwnmacc.mask
    riscv_vfwnmsac,                            // llvm.riscv.vfwnmsac
    riscv_vfwnmsac_mask,                       // llvm.riscv.vfwnmsac.mask
    riscv_vfwredosum,                          // llvm.riscv.vfwredosum
    riscv_vfwredosum_mask,                     // llvm.riscv.vfwredosum.mask
    riscv_vfwredsum,                           // llvm.riscv.vfwredsum
    riscv_vfwredsum_mask,                      // llvm.riscv.vfwredsum.mask
    riscv_vfwsub,                              // llvm.riscv.vfwsub
    riscv_vfwsub_mask,                         // llvm.riscv.vfwsub.mask
    riscv_vfwsub_w,                            // llvm.riscv.vfwsub.w
    riscv_vfwsub_w_mask,                       // llvm.riscv.vfwsub.w.mask
    riscv_vid,                                 // llvm.riscv.vid
    riscv_vid_mask,                            // llvm.riscv.vid.mask
    riscv_viota,                               // llvm.riscv.viota
    riscv_viota_mask,                          // llvm.riscv.viota.mask
    riscv_vle,                                 // llvm.riscv.vle
    riscv_vle_mask,                            // llvm.riscv.vle.mask
    riscv_vle1,                                // llvm.riscv.vle1
    riscv_vleff,                               // llvm.riscv.vleff
    riscv_vleff_mask,                          // llvm.riscv.vleff.mask
    riscv_vloxei,                              // llvm.riscv.vloxei
    riscv_vloxei_mask,                         // llvm.riscv.vloxei.mask
    riscv_vloxseg2,                            // llvm.riscv.vloxseg2
    riscv_vloxseg2_mask,                       // llvm.riscv.vloxseg2.mask
    riscv_vloxseg3,                            // llvm.riscv.vloxseg3
    riscv_vloxseg3_mask,                       // llvm.riscv.vloxseg3.mask
    riscv_vloxseg4,                            // llvm.riscv.vloxseg4
    riscv_vloxseg4_mask,                       // llvm.riscv.vloxseg4.mask
    riscv_vloxseg5,                            // llvm.riscv.vloxseg5
    riscv_vloxseg5_mask,                       // llvm.riscv.vloxseg5.mask
    riscv_vloxseg6,                            // llvm.riscv.vloxseg6
    riscv_vloxseg6_mask,                       // llvm.riscv.vloxseg6.mask
    riscv_vloxseg7,                            // llvm.riscv.vloxseg7
    riscv_vloxseg7_mask,                       // llvm.riscv.vloxseg7.mask
    riscv_vloxseg8,                            // llvm.riscv.vloxseg8
    riscv_vloxseg8_mask,                       // llvm.riscv.vloxseg8.mask
    riscv_vlse,                                // llvm.riscv.vlse
    riscv_vlse_mask,                           // llvm.riscv.vlse.mask
    riscv_vlseg2,                              // llvm.riscv.vlseg2
    riscv_vlseg2_mask,                         // llvm.riscv.vlseg2.mask
    riscv_vlseg2ff,                            // llvm.riscv.vlseg2ff
    riscv_vlseg2ff_mask,                       // llvm.riscv.vlseg2ff.mask
    riscv_vlseg3,                              // llvm.riscv.vlseg3
    riscv_vlseg3_mask,                         // llvm.riscv.vlseg3.mask
    riscv_vlseg3ff,                            // llvm.riscv.vlseg3ff
    riscv_vlseg3ff_mask,                       // llvm.riscv.vlseg3ff.mask
    riscv_vlseg4,                              // llvm.riscv.vlseg4
    riscv_vlseg4_mask,                         // llvm.riscv.vlseg4.mask
    riscv_vlseg4ff,                            // llvm.riscv.vlseg4ff
    riscv_vlseg4ff_mask,                       // llvm.riscv.vlseg4ff.mask
    riscv_vlseg5,                              // llvm.riscv.vlseg5
    riscv_vlseg5_mask,                         // llvm.riscv.vlseg5.mask
    riscv_vlseg5ff,                            // llvm.riscv.vlseg5ff
    riscv_vlseg5ff_mask,                       // llvm.riscv.vlseg5ff.mask
    riscv_vlseg6,                              // llvm.riscv.vlseg6
    riscv_vlseg6_mask,                         // llvm.riscv.vlseg6.mask
    riscv_vlseg6ff,                            // llvm.riscv.vlseg6ff
    riscv_vlseg6ff_mask,                       // llvm.riscv.vlseg6ff.mask
    riscv_vlseg7,                              // llvm.riscv.vlseg7
    riscv_vlseg7_mask,                         // llvm.riscv.vlseg7.mask
    riscv_vlseg7ff,                            // llvm.riscv.vlseg7ff
    riscv_vlseg7ff_mask,                       // llvm.riscv.vlseg7ff.mask
    riscv_vlseg8,                              // llvm.riscv.vlseg8
    riscv_vlseg8_mask,                         // llvm.riscv.vlseg8.mask
    riscv_vlseg8ff,                            // llvm.riscv.vlseg8ff
    riscv_vlseg8ff_mask,                       // llvm.riscv.vlseg8ff.mask
    riscv_vlsseg2,                             // llvm.riscv.vlsseg2
    riscv_vlsseg2_mask,                        // llvm.riscv.vlsseg2.mask
    riscv_vlsseg3,                             // llvm.riscv.vlsseg3
    riscv_vlsseg3_mask,                        // llvm.riscv.vlsseg3.mask
    riscv_vlsseg4,                             // llvm.riscv.vlsseg4
    riscv_vlsseg4_mask,                        // llvm.riscv.vlsseg4.mask
    riscv_vlsseg5,                             // llvm.riscv.vlsseg5
    riscv_vlsseg5_mask,                        // llvm.riscv.vlsseg5.mask
    riscv_vlsseg6,                             // llvm.riscv.vlsseg6
    riscv_vlsseg6_mask,                        // llvm.riscv.vlsseg6.mask
    riscv_vlsseg7,                             // llvm.riscv.vlsseg7
    riscv_vlsseg7_mask,                        // llvm.riscv.vlsseg7.mask
    riscv_vlsseg8,                             // llvm.riscv.vlsseg8
    riscv_vlsseg8_mask,                        // llvm.riscv.vlsseg8.mask
    riscv_vluxei,                              // llvm.riscv.vluxei
    riscv_vluxei_mask,                         // llvm.riscv.vluxei.mask
    riscv_vluxseg2,                            // llvm.riscv.vluxseg2
    riscv_vluxseg2_mask,                       // llvm.riscv.vluxseg2.mask
    riscv_vluxseg3,                            // llvm.riscv.vluxseg3
    riscv_vluxseg3_mask,                       // llvm.riscv.vluxseg3.mask
    riscv_vluxseg4,                            // llvm.riscv.vluxseg4
    riscv_vluxseg4_mask,                       // llvm.riscv.vluxseg4.mask
    riscv_vluxseg5,                            // llvm.riscv.vluxseg5
    riscv_vluxseg5_mask,                       // llvm.riscv.vluxseg5.mask
    riscv_vluxseg6,                            // llvm.riscv.vluxseg6
    riscv_vluxseg6_mask,                       // llvm.riscv.vluxseg6.mask
    riscv_vluxseg7,                            // llvm.riscv.vluxseg7
    riscv_vluxseg7_mask,                       // llvm.riscv.vluxseg7.mask
    riscv_vluxseg8,                            // llvm.riscv.vluxseg8
    riscv_vluxseg8_mask,                       // llvm.riscv.vluxseg8.mask
    riscv_vmacc,                               // llvm.riscv.vmacc
    riscv_vmacc_mask,                          // llvm.riscv.vmacc.mask
    riscv_vmadc,                               // llvm.riscv.vmadc
    riscv_vmadc_carry_in,                      // llvm.riscv.vmadc.carry.in
    riscv_vmadd,                               // llvm.riscv.vmadd
    riscv_vmadd_mask,                          // llvm.riscv.vmadd.mask
    riscv_vmand,                               // llvm.riscv.vmand
    riscv_vmandnot,                            // llvm.riscv.vmandnot
    riscv_vmax,                                // llvm.riscv.vmax
    riscv_vmax_mask,                           // llvm.riscv.vmax.mask
    riscv_vmaxu,                               // llvm.riscv.vmaxu
    riscv_vmaxu_mask,                          // llvm.riscv.vmaxu.mask
    riscv_vmclr,                               // llvm.riscv.vmclr
    riscv_vmerge,                              // llvm.riscv.vmerge
    riscv_vmfeq,                               // llvm.riscv.vmfeq
    riscv_vmfeq_mask,                          // llvm.riscv.vmfeq.mask
    riscv_vmfge,                               // llvm.riscv.vmfge
    riscv_vmfge_mask,                          // llvm.riscv.vmfge.mask
    riscv_vmfgt,                               // llvm.riscv.vmfgt
    riscv_vmfgt_mask,                          // llvm.riscv.vmfgt.mask
    riscv_vmfle,                               // llvm.riscv.vmfle
    riscv_vmfle_mask,                          // llvm.riscv.vmfle.mask
    riscv_vmflt,                               // llvm.riscv.vmflt
    riscv_vmflt_mask,                          // llvm.riscv.vmflt.mask
    riscv_vmfne,                               // llvm.riscv.vmfne
    riscv_vmfne_mask,                          // llvm.riscv.vmfne.mask
    riscv_vmin,                                // llvm.riscv.vmin
    riscv_vmin_mask,                           // llvm.riscv.vmin.mask
    riscv_vminu,                               // llvm.riscv.vminu
    riscv_vminu_mask,                          // llvm.riscv.vminu.mask
    riscv_vmnand,                              // llvm.riscv.vmnand
    riscv_vmnor,                               // llvm.riscv.vmnor
    riscv_vmor,                                // llvm.riscv.vmor
    riscv_vmornot,                             // llvm.riscv.vmornot
    riscv_vmsbc,                               // llvm.riscv.vmsbc
    riscv_vmsbc_borrow_in,                     // llvm.riscv.vmsbc.borrow.in
    riscv_vmsbf,                               // llvm.riscv.vmsbf
    riscv_vmsbf_mask,                          // llvm.riscv.vmsbf.mask
    riscv_vmseq,                               // llvm.riscv.vmseq
    riscv_vmseq_mask,                          // llvm.riscv.vmseq.mask
    riscv_vmset,                               // llvm.riscv.vmset
    riscv_vmsgt,                               // llvm.riscv.vmsgt
    riscv_vmsgt_mask,                          // llvm.riscv.vmsgt.mask
    riscv_vmsgtu,                              // llvm.riscv.vmsgtu
    riscv_vmsgtu_mask,                         // llvm.riscv.vmsgtu.mask
    riscv_vmsif,                               // llvm.riscv.vmsif
    riscv_vmsif_mask,                          // llvm.riscv.vmsif.mask
    riscv_vmsle,                               // llvm.riscv.vmsle
    riscv_vmsle_mask,                          // llvm.riscv.vmsle.mask
    riscv_vmsleu,                              // llvm.riscv.vmsleu
    riscv_vmsleu_mask,                         // llvm.riscv.vmsleu.mask
    riscv_vmslt,                               // llvm.riscv.vmslt
    riscv_vmslt_mask,                          // llvm.riscv.vmslt.mask
    riscv_vmsltu,                              // llvm.riscv.vmsltu
    riscv_vmsltu_mask,                         // llvm.riscv.vmsltu.mask
    riscv_vmsne,                               // llvm.riscv.vmsne
    riscv_vmsne_mask,                          // llvm.riscv.vmsne.mask
    riscv_vmsof,                               // llvm.riscv.vmsof
    riscv_vmsof_mask,                          // llvm.riscv.vmsof.mask
    riscv_vmul,                                // llvm.riscv.vmul
    riscv_vmul_mask,                           // llvm.riscv.vmul.mask
    riscv_vmulh,                               // llvm.riscv.vmulh
    riscv_vmulh_mask,                          // llvm.riscv.vmulh.mask
    riscv_vmulhsu,                             // llvm.riscv.vmulhsu
    riscv_vmulhsu_mask,                        // llvm.riscv.vmulhsu.mask
    riscv_vmulhu,                              // llvm.riscv.vmulhu
    riscv_vmulhu_mask,                         // llvm.riscv.vmulhu.mask
    riscv_vmv_s_x,                             // llvm.riscv.vmv.s.x
    riscv_vmv_v_v,                             // llvm.riscv.vmv.v.v
    riscv_vmv_v_x,                             // llvm.riscv.vmv.v.x
    riscv_vmv_x_s,                             // llvm.riscv.vmv.x.s
    riscv_vmxnor,                              // llvm.riscv.vmxnor
    riscv_vmxor,                               // llvm.riscv.vmxor
    riscv_vnclip,                              // llvm.riscv.vnclip
    riscv_vnclip_mask,                         // llvm.riscv.vnclip.mask
    riscv_vnclipu,                             // llvm.riscv.vnclipu
    riscv_vnclipu_mask,                        // llvm.riscv.vnclipu.mask
    riscv_vnmsac,                              // llvm.riscv.vnmsac
    riscv_vnmsac_mask,                         // llvm.riscv.vnmsac.mask
    riscv_vnmsub,                              // llvm.riscv.vnmsub
    riscv_vnmsub_mask,                         // llvm.riscv.vnmsub.mask
    riscv_vnsra,                               // llvm.riscv.vnsra
    riscv_vnsra_mask,                          // llvm.riscv.vnsra.mask
    riscv_vnsrl,                               // llvm.riscv.vnsrl
    riscv_vnsrl_mask,                          // llvm.riscv.vnsrl.mask
    riscv_vor,                                 // llvm.riscv.vor
    riscv_vor_mask,                            // llvm.riscv.vor.mask
    riscv_vpopc,                               // llvm.riscv.vpopc
    riscv_vpopc_mask,                          // llvm.riscv.vpopc.mask
    riscv_vredand,                             // llvm.riscv.vredand
    riscv_vredand_mask,                        // llvm.riscv.vredand.mask
    riscv_vredmax,                             // llvm.riscv.vredmax
    riscv_vredmax_mask,                        // llvm.riscv.vredmax.mask
    riscv_vredmaxu,                            // llvm.riscv.vredmaxu
    riscv_vredmaxu_mask,                       // llvm.riscv.vredmaxu.mask
    riscv_vredmin,                             // llvm.riscv.vredmin
    riscv_vredmin_mask,                        // llvm.riscv.vredmin.mask
    riscv_vredminu,                            // llvm.riscv.vredminu
    riscv_vredminu_mask,                       // llvm.riscv.vredminu.mask
    riscv_vredor,                              // llvm.riscv.vredor
    riscv_vredor_mask,                         // llvm.riscv.vredor.mask
    riscv_vredsum,                             // llvm.riscv.vredsum
    riscv_vredsum_mask,                        // llvm.riscv.vredsum.mask
    riscv_vredxor,                             // llvm.riscv.vredxor
    riscv_vredxor_mask,                        // llvm.riscv.vredxor.mask
    riscv_vrem,                                // llvm.riscv.vrem
    riscv_vrem_mask,                           // llvm.riscv.vrem.mask
    riscv_vremu,                               // llvm.riscv.vremu
    riscv_vremu_mask,                          // llvm.riscv.vremu.mask
    riscv_vrgather_vv,                         // llvm.riscv.vrgather.vv
    riscv_vrgather_vv_mask,                    // llvm.riscv.vrgather.vv.mask
    riscv_vrgather_vx,                         // llvm.riscv.vrgather.vx
    riscv_vrgather_vx_mask,                    // llvm.riscv.vrgather.vx.mask
    riscv_vrgatherei16_vv,                     // llvm.riscv.vrgatherei16.vv
    riscv_vrgatherei16_vv_mask,                // llvm.riscv.vrgatherei16.vv.mask
    riscv_vrsub,                               // llvm.riscv.vrsub
    riscv_vrsub_mask,                          // llvm.riscv.vrsub.mask
    riscv_vsadd,                               // llvm.riscv.vsadd
    riscv_vsadd_mask,                          // llvm.riscv.vsadd.mask
    riscv_vsaddu,                              // llvm.riscv.vsaddu
    riscv_vsaddu_mask,                         // llvm.riscv.vsaddu.mask
    riscv_vsbc,                                // llvm.riscv.vsbc
    riscv_vse,                                 // llvm.riscv.vse
    riscv_vse_mask,                            // llvm.riscv.vse.mask
    riscv_vse1,                                // llvm.riscv.vse1
    riscv_vsetvli,                             // llvm.riscv.vsetvli
    riscv_vsetvlimax,                          // llvm.riscv.vsetvlimax
    riscv_vsext,                               // llvm.riscv.vsext
    riscv_vsext_mask,                          // llvm.riscv.vsext.mask
    riscv_vslide1down,                         // llvm.riscv.vslide1down
    riscv_vslide1down_mask,                    // llvm.riscv.vslide1down.mask
    riscv_vslide1up,                           // llvm.riscv.vslide1up
    riscv_vslide1up_mask,                      // llvm.riscv.vslide1up.mask
    riscv_vslidedown,                          // llvm.riscv.vslidedown
    riscv_vslidedown_mask,                     // llvm.riscv.vslidedown.mask
    riscv_vslideup,                            // llvm.riscv.vslideup
    riscv_vslideup_mask,                       // llvm.riscv.vslideup.mask
    riscv_vsll,                                // llvm.riscv.vsll
    riscv_vsll_mask,                           // llvm.riscv.vsll.mask
    riscv_vsmul,                               // llvm.riscv.vsmul
    riscv_vsmul_mask,                          // llvm.riscv.vsmul.mask
    riscv_vsoxei,                              // llvm.riscv.vsoxei
    riscv_vsoxei_mask,                         // llvm.riscv.vsoxei.mask
    riscv_vsoxseg2,                            // llvm.riscv.vsoxseg2
    riscv_vsoxseg2_mask,                       // llvm.riscv.vsoxseg2.mask
    riscv_vsoxseg3,                            // llvm.riscv.vsoxseg3
    riscv_vsoxseg3_mask,                       // llvm.riscv.vsoxseg3.mask
    riscv_vsoxseg4,                            // llvm.riscv.vsoxseg4
    riscv_vsoxseg4_mask,                       // llvm.riscv.vsoxseg4.mask
    riscv_vsoxseg5,                            // llvm.riscv.vsoxseg5
    riscv_vsoxseg5_mask,                       // llvm.riscv.vsoxseg5.mask
    riscv_vsoxseg6,                            // llvm.riscv.vsoxseg6
    riscv_vsoxseg6_mask,                       // llvm.riscv.vsoxseg6.mask
    riscv_vsoxseg7,                            // llvm.riscv.vsoxseg7
    riscv_vsoxseg7_mask,                       // llvm.riscv.vsoxseg7.mask
    riscv_vsoxseg8,                            // llvm.riscv.vsoxseg8
    riscv_vsoxseg8_mask,                       // llvm.riscv.vsoxseg8.mask
    riscv_vsra,                                // llvm.riscv.vsra
    riscv_vsra_mask,                           // llvm.riscv.vsra.mask
    riscv_vsrl,                                // llvm.riscv.vsrl
    riscv_vsrl_mask,                           // llvm.riscv.vsrl.mask
    riscv_vsse,                                // llvm.riscv.vsse
    riscv_vsse_mask,                           // llvm.riscv.vsse.mask
    riscv_vsseg2,                              // llvm.riscv.vsseg2
    riscv_vsseg2_mask,                         // llvm.riscv.vsseg2.mask
    riscv_vsseg3,                              // llvm.riscv.vsseg3
    riscv_vsseg3_mask,                         // llvm.riscv.vsseg3.mask
    riscv_vsseg4,                              // llvm.riscv.vsseg4
    riscv_vsseg4_mask,                         // llvm.riscv.vsseg4.mask
    riscv_vsseg5,                              // llvm.riscv.vsseg5
    riscv_vsseg5_mask,                         // llvm.riscv.vsseg5.mask
    riscv_vsseg6,                              // llvm.riscv.vsseg6
    riscv_vsseg6_mask,                         // llvm.riscv.vsseg6.mask
    riscv_vsseg7,                              // llvm.riscv.vsseg7
    riscv_vsseg7_mask,                         // llvm.riscv.vsseg7.mask
    riscv_vsseg8,                              // llvm.riscv.vsseg8
    riscv_vsseg8_mask,                         // llvm.riscv.vsseg8.mask
    riscv_vssra,                               // llvm.riscv.vssra
    riscv_vssra_mask,                          // llvm.riscv.vssra.mask
    riscv_vssrl,                               // llvm.riscv.vssrl
    riscv_vssrl_mask,                          // llvm.riscv.vssrl.mask
    riscv_vssseg2,                             // llvm.riscv.vssseg2
    riscv_vssseg2_mask,                        // llvm.riscv.vssseg2.mask
    riscv_vssseg3,                             // llvm.riscv.vssseg3
    riscv_vssseg3_mask,                        // llvm.riscv.vssseg3.mask
    riscv_vssseg4,                             // llvm.riscv.vssseg4
    riscv_vssseg4_mask,                        // llvm.riscv.vssseg4.mask
    riscv_vssseg5,                             // llvm.riscv.vssseg5
    riscv_vssseg5_mask,                        // llvm.riscv.vssseg5.mask
    riscv_vssseg6,                             // llvm.riscv.vssseg6
    riscv_vssseg6_mask,                        // llvm.riscv.vssseg6.mask
    riscv_vssseg7,                             // llvm.riscv.vssseg7
    riscv_vssseg7_mask,                        // llvm.riscv.vssseg7.mask
    riscv_vssseg8,                             // llvm.riscv.vssseg8
    riscv_vssseg8_mask,                        // llvm.riscv.vssseg8.mask
    riscv_vssub,                               // llvm.riscv.vssub
    riscv_vssub_mask,                          // llvm.riscv.vssub.mask
    riscv_vssubu,                              // llvm.riscv.vssubu
    riscv_vssubu_mask,                         // llvm.riscv.vssubu.mask
    riscv_vsub,                                // llvm.riscv.vsub
    riscv_vsub_mask,                           // llvm.riscv.vsub.mask
    riscv_vsuxei,                              // llvm.riscv.vsuxei
    riscv_vsuxei_mask,                         // llvm.riscv.vsuxei.mask
    riscv_vsuxseg2,                            // llvm.riscv.vsuxseg2
    riscv_vsuxseg2_mask,                       // llvm.riscv.vsuxseg2.mask
    riscv_vsuxseg3,                            // llvm.riscv.vsuxseg3
    riscv_vsuxseg3_mask,                       // llvm.riscv.vsuxseg3.mask
    riscv_vsuxseg4,                            // llvm.riscv.vsuxseg4
    riscv_vsuxseg4_mask,                       // llvm.riscv.vsuxseg4.mask
    riscv_vsuxseg5,                            // llvm.riscv.vsuxseg5
    riscv_vsuxseg5_mask,                       // llvm.riscv.vsuxseg5.mask
    riscv_vsuxseg6,                            // llvm.riscv.vsuxseg6
    riscv_vsuxseg6_mask,                       // llvm.riscv.vsuxseg6.mask
    riscv_vsuxseg7,                            // llvm.riscv.vsuxseg7
    riscv_vsuxseg7_mask,                       // llvm.riscv.vsuxseg7.mask
    riscv_vsuxseg8,                            // llvm.riscv.vsuxseg8
    riscv_vsuxseg8_mask,                       // llvm.riscv.vsuxseg8.mask
    riscv_vwadd,                               // llvm.riscv.vwadd
    riscv_vwadd_mask,                          // llvm.riscv.vwadd.mask
    riscv_vwadd_w,                             // llvm.riscv.vwadd.w
    riscv_vwadd_w_mask,                        // llvm.riscv.vwadd.w.mask
    riscv_vwaddu,                              // llvm.riscv.vwaddu
    riscv_vwaddu_mask,                         // llvm.riscv.vwaddu.mask
    riscv_vwaddu_w,                            // llvm.riscv.vwaddu.w
    riscv_vwaddu_w_mask,                       // llvm.riscv.vwaddu.w.mask
    riscv_vwmacc,                              // llvm.riscv.vwmacc
    riscv_vwmacc_mask,                         // llvm.riscv.vwmacc.mask
    riscv_vwmaccsu,                            // llvm.riscv.vwmaccsu
    riscv_vwmaccsu_mask,                       // llvm.riscv.vwmaccsu.mask
    riscv_vwmaccu,                             // llvm.riscv.vwmaccu
    riscv_vwmaccu_mask,                        // llvm.riscv.vwmaccu.mask
    riscv_vwmaccus,                            // llvm.riscv.vwmaccus
    riscv_vwmaccus_mask,                       // llvm.riscv.vwmaccus.mask
    riscv_vwmul,                               // llvm.riscv.vwmul
    riscv_vwmul_mask,                          // llvm.riscv.vwmul.mask
    riscv_vwmulsu,                             // llvm.riscv.vwmulsu
    riscv_vwmulsu_mask,                        // llvm.riscv.vwmulsu.mask
    riscv_vwmulu,                              // llvm.riscv.vwmulu
    riscv_vwmulu_mask,                         // llvm.riscv.vwmulu.mask
    riscv_vwredsum,                            // llvm.riscv.vwredsum
    riscv_vwredsum_mask,                       // llvm.riscv.vwredsum.mask
    riscv_vwredsumu,                           // llvm.riscv.vwredsumu
    riscv_vwredsumu_mask,                      // llvm.riscv.vwredsumu.mask
    riscv_vwsub,                               // llvm.riscv.vwsub
    riscv_vwsub_mask,                          // llvm.riscv.vwsub.mask
    riscv_vwsub_w,                             // llvm.riscv.vwsub.w
    riscv_vwsub_w_mask,                        // llvm.riscv.vwsub.w.mask
    riscv_vwsubu,                              // llvm.riscv.vwsubu
    riscv_vwsubu_mask,                         // llvm.riscv.vwsubu.mask
    riscv_vwsubu_w,                            // llvm.riscv.vwsubu.w
    riscv_vwsubu_w_mask,                       // llvm.riscv.vwsubu.w.mask
    riscv_vxor,                                // llvm.riscv.vxor
    riscv_vxor_mask,                           // llvm.riscv.vxor.mask
    riscv_vzext,                               // llvm.riscv.vzext
    riscv_vzext_mask,                          // llvm.riscv.vzext.mask
}; // enum
} // namespace Intrinsic
} // namespace llvm

#endif
