#ifndef THREADS_FIXEDPOINT_H
#define THREADS_FIXEDPOINT_H


#define FRACTION_FACTOR (16384)

#define TO_FIXED_POINT(integer) ((integer) * FRACTION_FACTOR)
#define TO_INT_ROUND_ZERO(fixed_point) ((fixed_point) / FRACTION_FACTOR)
#define TO_INT_NEAREST_POS(fp) (TO_INT_ROUND_ZERO((fp) + (FRACTION_FACTOR / 2)))
#define TO_INT_NEAREST_NEG(fp) (TO_INT_ROUND_ZERO((fp) - (FRACTION_FACTOR / 2)))

#define MULT_FIXED(f1, f2) (((int64_t) (f1)) * (f2) / FRACTION_FACTOR)
#define MULT_FIXED_POS(f1, f2) (((((int64_t) (f1)) * (f2)) + (FRACTION_FACTOR / 2)) / FRACTION_FACTOR)
#define MULT_FIXED_NEG(f1, f2) (((((int64_t) (f1)) * (f2)) - (FRACTION_FACTOR / 2)) / FRACTION_FACTOR)
#define DIV_FIXED(f1, f2) (((int64_t) (f1)) * FRACTION_FACTOR / (f2))
#define DIV_FIXED_POS(f1, f2) (((((int64_t) (f1)) * FRACTION_FACTOR) + ((f2) / 2)) / (f2))
#define DIV_FIXED_NEG(f1, f2) (((((int64_t) (f1)) * FRACTION_FACTOR) - ((f2) / 2)) / (f2))

#define TO_FIXED_POINT_FRAC(num, denom) (TO_FIXED_POINT(num) / (denom))
#define TO_FIXED_POINT_FRAC_POS(num, denom) ((TO_FIXED_POINT(num) + ((denom) / 2)) / (denom))
#define TO_FIXED_POINT_FRAC_NEG(num, denom) ((TO_FIXED_POINT(num) - ((denom) / 2)) / (denom))


#endif /* threads/fixed_point.h */
