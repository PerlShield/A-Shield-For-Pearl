
struct tty {    
        int                             tty.t_locker                    000             4
        int                             tty.t_mutex_index               004             4
        struct tty *                    tty.t_tp_virt                   008             4
        struct clist                    tty.t_rawq                      00c             20
                int                     tty.t_rawq.c_cc                 00c             4
                int                     tty.t_rawq.c_cmax               010             4
                int                     tty.t_c_cfx                     014             4
                int                     tty.t_c_clx                     018             4
                struct tty *            tty.t_rawq.c_tp_cpu             01c             4
                struct tty *            tty.t_rawq_tp_iop               020             4
                unsigned char *         tty.t_rawq.c_buf_cpu            024             4
                unsigned char *         tty.t_rawq.c_buf_iop            028             4
struct clist                            tty.t_canq                      02c             20
        int                             tty.t_canq.c_cc                 02c             4
        int                             tty.t_canq.c_cmax               030             4
        int                             tty.t_canq.c_cfx                034             4
        int                             tty.t_canq.c_clx                038             4

        struct tty *                    tty.t_canq.c_tp_cpu             03c             4
        struct tty *                    tty.t_canq.c_tp_iop             040             4
        unsigned char *                 tty.t_canq.c_buf_cpu            044             4
        unsigned char *                 tty.t_canq.c_buf_iop            048             4
struct clist                            tty.t_outq                      04c             20
                int                     tty.t_outq.c_cc                 04c             4
                int                     tty.t_outq.c_cmax               050             4
                int                     tty.t_outq.c_cfx                054             4
                int                     tty.t_outq.c_clx                058             4
                struct tty *            tty.t_outq.c_tp_cpu             05c             4
                struct tty *            tty.t_outq.c_tp_iop             060             4
                unsigned char *         tty.t_outq.c_buf_cpu            064             4
                unsigned char *         tty.t_out.c_iop                 068             4
        (*int)()                        tty.t_oproc_cpu                 06c             4
        (*int)()                        tty.t_oproc_iop                 070             4
        (*int)()                        tty.t_stopproc_cpu              074             4
        (*int)()                        tty.t_stopproc_iop              078             4
struct thread *                         tty.t_rsel                      07c             4



