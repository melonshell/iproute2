#ifndef _TC_CBQ_H_
#define _TC_CBQ_H_ 1

unsigned tc_cbq_calc_maxidle(__u64 bndw, __u64 rate, unsigned avpkt,
			     int ewma_log, unsigned maxburst);
unsigned tc_cbq_calc_offtime(__u64 bndw, __u64 rate, unsigned avpkt,
			     int ewma_log, unsigned minburst);

#endif
