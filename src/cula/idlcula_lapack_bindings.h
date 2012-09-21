int culaCbdsqr(char uplo, int n, int ncvt, int nru, int ncc, float d[], float e[], IDL_COMPLEX vt[], int ldvt, IDL_COMPLEX u[], int ldu, IDL_COMPLEX c[], int ldc);
int culaCgbtrf(int m, int n, int kl, int ku, IDL_COMPLEX a[], int lda, IDL_LONG ipiv[]);
int culaCgbtrs(char trans, int n, int kl, int ku, int nrhs, IDL_COMPLEX ab[], int ldab, IDL_LONG ipiv[], IDL_COMPLEX b[], int ldb);
int culaCgebrd(int m, int n, IDL_COMPLEX a[], int lda, float d[], float e[], IDL_COMPLEX tauq[], IDL_COMPLEX taup[]);
int culaCgeev(char jobvl, char jobvr, int n, IDL_COMPLEX a[], int lda, IDL_COMPLEX w[], IDL_COMPLEX vl[], int ldvl, IDL_COMPLEX vr[], int ldvr);
int culaCgehrd(int n, int ilo, int ihi, IDL_COMPLEX a[], int lda, IDL_COMPLEX tau[]);
int culaCgelqf(int m, int n, IDL_COMPLEX a[], int lda, IDL_COMPLEX tau[]);
int culaCgels(char trans, int m, int n, int nrhs, IDL_COMPLEX a[], int lda, IDL_COMPLEX b[], int ldb);
int culaCgeqlf(int m, int n, IDL_COMPLEX a[], int lda, IDL_COMPLEX tau[]);
int culaCgeqrf(int m, int n, IDL_COMPLEX a[], int lda, IDL_COMPLEX tau[]);
int culaCgeqrs(int m, int n, int nrhs, IDL_COMPLEX a[], int lda, IDL_COMPLEX tau[], IDL_COMPLEX b[], int ldb);
int culaCgerqf(int m, int n, IDL_COMPLEX a[], int lda, IDL_COMPLEX tau[]);
int culaCgesv(int n, int nrhs, IDL_COMPLEX a[], int lda, IDL_LONG ipiv[], IDL_COMPLEX b[], int ldb);
int culaCgesvd(char jobu, char jobvt, int m, int n, IDL_COMPLEX a[], int lda, float s[], IDL_COMPLEX u[], int ldu, IDL_COMPLEX vt[], int ldvt);
int culaCgetrf(int m, int n, IDL_COMPLEX a[], int lda, IDL_LONG ipiv[]);
int culaCgetri(int n, IDL_COMPLEX a[], int lda, IDL_LONG ipiv[]);
int culaCgetrs(char trans, int n, int nrhs, IDL_COMPLEX a[], int lda, IDL_LONG ipiv[], IDL_COMPLEX b[], int ldb);
int culaCgglse(int m, int n, int p, IDL_COMPLEX a[], int lda, IDL_COMPLEX b[], int ldb, IDL_COMPLEX c[], IDL_COMPLEX d[], IDL_COMPLEX x[]);
int culaCggrqf(int m, int p, int n, IDL_COMPLEX a[], int lda, IDL_COMPLEX taua[], IDL_COMPLEX b[], int ldb, IDL_COMPLEX taub[]);
int culaCheev(char jobz, char uplo, int n, IDL_COMPLEX a[], int lda, float w[]);
int culaCheevx(char jobz, char range, char uplo, int n, IDL_COMPLEX a[], int lda, float vl, float vu, int il, int iu, float abstol, IDL_LONG m[], float w[], IDL_COMPLEX z[], int ldz, IDL_LONG ifail[]);
int culaCherdb(char jobz, char uplo, int n, int kd, IDL_COMPLEX a[], int lda, float d[], float e[], IDL_COMPLEX tau[], IDL_COMPLEX z[], int ldz);
int culaChetrd(char uplo, int n, IDL_COMPLEX a[], int lda, float d[], float e[], IDL_COMPLEX tau[]);
int culaClacpy(char uplo, int m, int n, IDL_COMPLEX a[], int lda, IDL_COMPLEX b[], int ldb);
int culaClag2z(int m, int n, IDL_COMPLEX a[], int lda, IDL_DCOMPLEX sa[], int ldsa);
int culaClange(char norm, int m, int n, IDL_COMPLEX a[], int lda, float result[]);
int culaClanhe(char norm, char uplo, int n, IDL_COMPLEX a[], int lda, float result[]);
int culaClar2v(int n, IDL_COMPLEX x[], IDL_COMPLEX y[], IDL_COMPLEX z[], int incx, float c[], IDL_COMPLEX s[], int incc);
int culaClarfb(char side, char trans, char direct, char storev, int m, int n, int k, IDL_COMPLEX v[], int ldv, IDL_COMPLEX t[], int ldt, IDL_COMPLEX c[], int ldc);
int culaClarfg(int n, IDL_COMPLEX alpha[], IDL_COMPLEX x[], int incx, IDL_COMPLEX tau[]);
int culaClargv(int n, IDL_COMPLEX x[], int incx, IDL_COMPLEX y[], int incy, float c[], int incc);
int culaClartv(int n, IDL_COMPLEX x[], int incx, IDL_COMPLEX y[], int incy, float c[], IDL_COMPLEX s[], int incc);
int culaClascl(char type, int kl, int ku, float cfrom, float cto, int m, int n, IDL_COMPLEX a[], int lda);
int culaClasr(char side, char pivot, char direct, int m, int n, float c[], float s[], IDL_COMPLEX a[], int lda);
int culaClaswp(int n, IDL_COMPLEX a[], int lda, int k1, int k2, IDL_LONG ipiv[], int incx);
int culaClaswpcol(int n, IDL_COMPLEX a[], int lda, int k1, int k2, IDL_LONG ipiv[], int incx);
int culaClat2z(char uplo, int n, IDL_COMPLEX a[], int lda, IDL_DCOMPLEX sa[], int ldsa);
int culaCpbtrf(char uplo, int n, int kd, IDL_COMPLEX ab[], int ldab);
int culaCposv(char uplo, int n, int nrhs, IDL_COMPLEX a[], int lda, IDL_COMPLEX b[], int ldb);
int culaCpotrf(char uplo, int n, IDL_COMPLEX a[], int lda);
int culaCpotri(char uplo, int n, IDL_COMPLEX a[], int lda);
int culaCpotrs(char uplo, int n, int nrhs, IDL_COMPLEX a[], int lda, IDL_COMPLEX b[], int ldb);
int culaCpptrf(char uplo, int n, IDL_COMPLEX ap[]);
int culaCsteqr(char compz, int n, float d[], float e[], IDL_COMPLEX z[], int ldz);
int culaCtrtri(char uplo, char diag, int n, IDL_COMPLEX a[], int lda);
int culaCtrtrs(char uplo, char trans, char diag, int n, int nrhs, IDL_COMPLEX a[], int lda, IDL_COMPLEX b[], int ldb);
int culaCungbr(char vect, int m, int n, int k, IDL_COMPLEX a[], int lda, IDL_COMPLEX tau[]);
int culaCunghr(int n, int ilo, int ihi, IDL_COMPLEX a[], int lda, IDL_COMPLEX tau[]);
int culaCunglq(int m, int n, int k, IDL_COMPLEX a[], int lda, IDL_COMPLEX tau[]);
int culaCungql(int m, int n, int k, IDL_COMPLEX a[], int lda, IDL_COMPLEX tau[]);
int culaCungqr(int m, int n, int k, IDL_COMPLEX a[], int lda, IDL_COMPLEX tau[]);
int culaCungrq(int m, int n, int k, IDL_COMPLEX a[], int lda, IDL_COMPLEX tau[]);
int culaCunmlq(char side, char trans, int m, int n, int k, IDL_COMPLEX a[], int lda, IDL_COMPLEX tau[], IDL_COMPLEX c[], int ldc);
int culaCunmql(char side, char trans, int m, int n, int k, IDL_COMPLEX a[], int lda, IDL_COMPLEX tau[], IDL_COMPLEX c[], int ldc);
int culaCunmqr(char side, char trans, int m, int n, int k, IDL_COMPLEX a[], int lda, IDL_COMPLEX tau[], IDL_COMPLEX c[], int ldc);
int culaCunmrq(char side, char trans, int m, int n, int k, IDL_COMPLEX a[], int lda, IDL_COMPLEX tau[], IDL_COMPLEX c[], int ldc);
int culaDbdsqr(char uplo, int n, int ncvt, int nru, int ncc, double d[], double e[], double vt[], int ldvt, double u[], int ldu, double c[], int ldc);
int culaDgbtrf(int m, int n, int kl, int ku, double a[], int lda, IDL_LONG ipiv[]);
int culaDgbtrs(char trans, int n, int kl, int ku, int nrhs, double ab[], int ldab, IDL_LONG ipiv[], double b[], int ldb);
int culaDgebrd(int m, int n, double a[], int lda, double d[], double e[], double tauq[], double taup[]);
int culaDgeev(char jobvl, char jobvr, int n, double a[], int lda, double wr[], double wi[], double vl[], int ldvl, double vr[], int ldvr);
int culaDgehrd(int n, int ilo, int ihi, double a[], int lda, double tau[]);
int culaDgelqf(int m, int n, double a[], int lda, double tau[]);
int culaDgels(char trans, int m, int n, int nrhs, double a[], int lda, double b[], int ldb);
int culaDgeqlf(int m, int n, double a[], int lda, double tau[]);
int culaDgeqrf(int m, int n, double a[], int lda, double tau[]);
int culaDgeqrs(int m, int n, int nrhs, double a[], int lda, double tau[], double b[], int ldb);
int culaDgerqf(int m, int n, double a[], int lda, double tau[]);
int culaDgesv(int n, int nrhs, double a[], int lda, IDL_LONG ipiv[], double b[], int ldb);
int culaDgesvd(char jobu, char jobvt, int m, int n, double a[], int lda, double s[], double u[], int ldu, double vt[], int ldvt);
int culaDgetrf(int m, int n, double a[], int lda, IDL_LONG ipiv[]);
int culaDgetri(int n, double a[], int lda, IDL_LONG ipiv[]);
int culaDgetrs(char trans, int n, int nrhs, double a[], int lda, IDL_LONG ipiv[], double b[], int ldb);
int culaDgglse(int m, int n, int p, double a[], int lda, double b[], int ldb, double c[], double d[], double x[]);
int culaDggrqf(int m, int p, int n, double a[], int lda, double taua[], double b[], int ldb, double taub[]);
int culaDlacpy(char uplo, int m, int n, double a[], int lda, double b[], int ldb);
int culaDlag2s(int m, int n, double a[], int lda, float sa[], int ldsa);
int culaDlange(char norm, int m, int n, double a[], int lda, double result[]);
int culaDlanhe(char norm, char uplo, int n, double a[], int lda, double result[]);
int culaDlar2v(int n, double x[], double y[], double z[], int incx, double c[], double s[], int incc);
int culaDlarfb(char side, char trans, char direct, char storev, int m, int n, int k, double v[], int ldv, double t[], int ldt, double c[], int ldc);
int culaDlarfg(int n, double alpha[], double x[], int incx, double tau[]);
int culaDlargv(int n, double x[], int incx, double y[], int incy, double c[], int incc);
int culaDlartv(int n, double x[], int incx, double y[], int incy, double c[], double s[], int incc);
int culaDlascl(char type, int kl, int ku, double cfrom, double cto, int m, int n, double a[], int lda);
int culaDlaset(char uplo, int m, int n, double alpha, double beta, double a[], int lda);
int culaDlasr(char side, char pivot, char direct, int m, int n, double c[], double s[], double a[], int lda);
int culaDlaswp(int n, double a[], int lda, int k1, int k2, IDL_LONG ipiv[], int incx);
int culaDlaswpcol(int n, double a[], int lda, int k1, int k2, IDL_LONG ipiv[], int incx);
int culaDlat2s(char uplo, int n, double a[], int lda, float sa[], int ldsa);
int culaDorgbr(char vect, int m, int n, int k, double a[], int lda, double tau[]);
int culaDorghr(int n, int ilo, int ihi, double a[], int lda, double tau[]);
int culaDorglq(int m, int n, int k, double a[], int lda, double tau[]);
int culaDorgql(int m, int n, int k, double a[], int lda, double tau[]);
int culaDorgqr(int m, int n, int k, double a[], int lda, double tau[]);
int culaDorgrq(int m, int n, int k, double a[], int lda, double tau[]);
int culaDormlq(char side, char trans, int m, int n, int k, double a[], int lda, double tau[], double c[], int ldc);
int culaDormql(char side, char trans, int m, int n, int k, double a[], int lda, double tau[], double c[], int ldc);
int culaDormqr(char side, char trans, int m, int n, int k, double a[], int lda, double tau[], double c[], int ldc);
int culaDormrq(char side, char trans, int m, int n, int k, double a[], int lda, double tau[], double c[], int ldc);
int culaDpbtrf(char uplo, int n, int kd, double ab[], int ldab);
int culaDposv(char uplo, int n, int nrhs, double a[], int lda, double b[], int ldb);
int culaDpotrf(char uplo, int n, double a[], int lda);
int culaDpotri(char uplo, int n, double a[], int lda);
int culaDpotrs(char uplo, int n, int nrhs, double a[], int lda, double b[], int ldb);
int culaDpptrf(char uplo, int n, double ap[]);
int culaDsgesv(int n, int nrhs, double a[], int lda, IDL_LONG ipiv[], double b[], int ldb, double x[], int ldx, IDL_LONG iter[]);
int culaDsposv(char uplo, int n, int nrhs, double a[], int lda, double b[], int ldb, double x[], int ldx, IDL_LONG iter[]);
int culaDstebz(char range, char order, int n, double vl, double vu, int il, int iu, double abstol, double d[], double e[], IDL_LONG m[], IDL_LONG nsplit[], double w[], IDL_LONG isplit[], IDL_LONG iblock[]);
int culaDsteqr(char compz, int n, double d[], double e[], double z[], int ldz);
int culaDsyev(char jobz, char uplo, int n, double a[], int lda, double w[]);
int culaDsyevx(char jobz, char range, char uplo, int n, double a[], int lda, double vl, double vu, int il, int iu, double abstol, IDL_LONG m[], double w[], double z[], int ldz, IDL_LONG ifail[]);
int culaDsyrdb(char jobz, char uplo, int n, int kd, double a[], int lda, double d[], double e[], double tau[], double z[], int ldz);
int culaDsytrd(char uplo, int n, double a[], int lda, double d[], double e[], double tau[]);
int culaDtrtri(char uplo, char diag, int n, double a[], int lda);
int culaDtrtrs(char uplo, char trans, char diag, int n, int nrhs, double a[], int lda, double b[], int ldb);
int culaSbdsqr(char uplo, int n, int ncvt, int nru, int ncc, float d[], float e[], float vt[], int ldvt, float u[], int ldu, float c[], int ldc);
int culaSgbtrf(int m, int n, int kl, int ku, float a[], int lda, IDL_LONG ipiv[]);
int culaSgbtrs(char trans, int n, int kl, int ku, int nrhs, float ab[], int ldab, IDL_LONG ipiv[], float b[], int ldb);
int culaSgebrd(int m, int n, float a[], int lda, float d[], float e[], float tauq[], float taup[]);
int culaSgeev(char jobvl, char jobvr, int n, float a[], int lda, float wr[], float wi[], float vl[], int ldvl, float vr[], int ldvr);
int culaSgehrd(int n, int ilo, int ihi, float a[], int lda, float tau[]);
int culaSgelqf(int m, int n, float a[], int lda, float tau[]);
int culaSgels(char trans, int m, int n, int nrhs, float a[], int lda, float b[], int ldb);
int culaSgeqlf(int m, int n, float a[], int lda, float tau[]);
int culaSgeqrf(int m, int n, float a[], int lda, float tau[]);
int culaSgeqrs(int m, int n, int nrhs, float a[], int lda, float tau[], float b[], int ldb);
int culaSgerqf(int m, int n, float a[], int lda, float tau[]);
int culaSgesv(int n, int nrhs, float a[], int lda, IDL_LONG ipiv[], float b[], int ldb);
int culaSgesvd(char jobu, char jobvt, int m, int n, float a[], int lda, float s[], float u[], int ldu, float vt[], int ldvt);
int culaSgetrf(int m, int n, float a[], int lda, IDL_LONG ipiv[]);
int culaSgetri(int n, float a[], int lda, IDL_LONG ipiv[]);
int culaSgetrs(char trans, int n, int nrhs, float a[], int lda, IDL_LONG ipiv[], float b[], int ldb);
int culaSgglse(int m, int n, int p, float a[], int lda, float b[], int ldb, float c[], float d[], float x[]);
int culaSggrqf(int m, int p, int n, float a[], int lda, float taua[], float b[], int ldb, float taub[]);
int culaSlacpy(char uplo, int m, int n, float a[], int lda, float b[], int ldb);
int culaSlag2d(int m, int n, float a[], int lda, double sa[], int ldsa);
int culaSlange(char norm, int m, int n, float a[], int lda, float result[]);
int culaSlanhe(char norm, char uplo, int n, float a[], int lda, float result[]);
int culaSlar2v(int n, float x[], float y[], float z[], int incx, float c[], float s[], int incc);
int culaSlarfb(char side, char trans, char direct, char storev, int m, int n, int k, float v[], int ldv, float t[], int ldt, float c[], int ldc);
int culaSlarfg(int n, float alpha[], float x[], int incx, float tau[]);
int culaSlargv(int n, float x[], int incx, float y[], int incy, float c[], int incc);
int culaSlartv(int n, float x[], int incx, float y[], int incy, float c[], float s[], int incc);
int culaSlascl(char type, int kl, int ku, float cfrom, float cto, int m, int n, float a[], int lda);
int culaSlaset(char uplo, int m, int n, float alpha, float beta, float a[], int lda);
int culaSlasr(char side, char pivot, char direct, int m, int n, float c[], float s[], float a[], int lda);
int culaSlaswp(int n, float a[], int lda, int k1, int k2, IDL_LONG ipiv[], int incx);
int culaSlaswpcol(int n, float a[], int lda, int k1, int k2, IDL_LONG ipiv[], int incx);
int culaSlat2d(char uplo, int n, float a[], int lda, double sa[], int ldsa);
int culaSorgbr(char vect, int m, int n, int k, float a[], int lda, float tau[]);
int culaSorghr(int n, int ilo, int ihi, float a[], int lda, float tau[]);
int culaSorglq(int m, int n, int k, float a[], int lda, float tau[]);
int culaSorgql(int m, int n, int k, float a[], int lda, float tau[]);
int culaSorgqr(int m, int n, int k, float a[], int lda, float tau[]);
int culaSorgrq(int m, int n, int k, float a[], int lda, float tau[]);
int culaSormlq(char side, char trans, int m, int n, int k, float a[], int lda, float tau[], float c[], int ldc);
int culaSormql(char side, char trans, int m, int n, int k, float a[], int lda, float tau[], float c[], int ldc);
int culaSormqr(char side, char trans, int m, int n, int k, float a[], int lda, float tau[], float c[], int ldc);
int culaSormrq(char side, char trans, int m, int n, int k, float a[], int lda, float tau[], float c[], int ldc);
int culaSpbtrf(char uplo, int n, int kd, float ab[], int ldab);
int culaSposv(char uplo, int n, int nrhs, float a[], int lda, float b[], int ldb);
int culaSpotrf(char uplo, int n, float a[], int lda);
int culaSpotri(char uplo, int n, float a[], int lda);
int culaSpotrs(char uplo, int n, int nrhs, float a[], int lda, float b[], int ldb);
int culaSpptrf(char uplo, int n, float ap[]);
int culaSstebz(char range, char order, int n, float vl, float vu, int il, int iu, float abstol, float d[], float e[], IDL_LONG m[], IDL_LONG nsplit[], float w[], IDL_LONG isplit[], IDL_LONG iblock[]);
int culaSsteqr(char compz, int n, float d[], float e[], float z[], int ldz);
int culaSsyev(char jobz, char uplo, int n, float a[], int lda, float w[]);
int culaSsyevx(char jobz, char range, char uplo, int n, float a[], int lda, float vl, float vu, int il, int iu, float abstol, IDL_LONG m[], float w[], float z[], int ldz, IDL_LONG ifail[]);
int culaSsyrdb(char jobz, char uplo, int n, int kd, float a[], int lda, float d[], float e[], float tau[], float z[], int ldz);
int culaSsytrd(char uplo, int n, float a[], int lda, float d[], float e[], float tau[]);
int culaStrtri(char uplo, char diag, int n, float a[], int lda);
int culaStrtrs(char uplo, char trans, char diag, int n, int nrhs, float a[], int lda, float b[], int ldb);
int culaZbdsqr(char uplo, int n, int ncvt, int nru, int ncc, double d[], double e[], IDL_DCOMPLEX vt[], int ldvt, IDL_DCOMPLEX u[], int ldu, IDL_DCOMPLEX c[], int ldc);
int culaZcgesv(int n, int nrhs, IDL_DCOMPLEX a[], int lda, IDL_LONG ipiv[], IDL_DCOMPLEX b[], int ldb, IDL_DCOMPLEX x[], int ldx, IDL_LONG iter[]);
int culaZcposv(char uplo, int n, int nrhs, IDL_DCOMPLEX a[], int lda, IDL_DCOMPLEX b[], int ldb, IDL_DCOMPLEX x[], int ldx, IDL_LONG iter[]);
int culaZgbtrf(int m, int n, int kl, int ku, IDL_DCOMPLEX a[], int lda, IDL_LONG ipiv[]);
int culaZgbtrs(char trans, int n, int kl, int ku, int nrhs, IDL_DCOMPLEX ab[], int ldab, IDL_LONG ipiv[], IDL_DCOMPLEX b[], int ldb);
int culaZgebrd(int m, int n, IDL_DCOMPLEX a[], int lda, double d[], double e[], IDL_DCOMPLEX tauq[], IDL_DCOMPLEX taup[]);
int culaZgeev(char jobvl, char jobvr, int n, IDL_DCOMPLEX a[], int lda, IDL_DCOMPLEX w[], IDL_DCOMPLEX vl[], int ldvl, IDL_DCOMPLEX vr[], int ldvr);
int culaZgehrd(int n, int ilo, int ihi, IDL_DCOMPLEX a[], int lda, IDL_DCOMPLEX tau[]);
int culaZgelqf(int m, int n, IDL_DCOMPLEX a[], int lda, IDL_DCOMPLEX tau[]);
int culaZgels(char trans, int m, int n, int nrhs, IDL_DCOMPLEX a[], int lda, IDL_DCOMPLEX b[], int ldb);
int culaZgeqlf(int m, int n, IDL_DCOMPLEX a[], int lda, IDL_DCOMPLEX tau[]);
int culaZgeqrf(int m, int n, IDL_DCOMPLEX a[], int lda, IDL_DCOMPLEX tau[]);
int culaZgeqrs(int m, int n, int nrhs, IDL_DCOMPLEX a[], int lda, IDL_DCOMPLEX tau[], IDL_DCOMPLEX b[], int ldb);
int culaZgerqf(int m, int n, IDL_DCOMPLEX a[], int lda, IDL_DCOMPLEX tau[]);
int culaZgesv(int n, int nrhs, IDL_DCOMPLEX a[], int lda, IDL_LONG ipiv[], IDL_DCOMPLEX b[], int ldb);
int culaZgesvd(char jobu, char jobvt, int m, int n, IDL_DCOMPLEX a[], int lda, double s[], IDL_DCOMPLEX u[], int ldu, IDL_DCOMPLEX vt[], int ldvt);
int culaZgetrf(int m, int n, IDL_DCOMPLEX a[], int lda, IDL_LONG ipiv[]);
int culaZgetri(int n, IDL_DCOMPLEX a[], int lda, IDL_LONG ipiv[]);
int culaZgetrs(char trans, int n, int nrhs, IDL_DCOMPLEX a[], int lda, IDL_LONG ipiv[], IDL_DCOMPLEX b[], int ldb);
int culaZgglse(int m, int n, int p, IDL_DCOMPLEX a[], int lda, IDL_DCOMPLEX b[], int ldb, IDL_DCOMPLEX c[], IDL_DCOMPLEX d[], IDL_DCOMPLEX x[]);
int culaZggrqf(int m, int p, int n, IDL_DCOMPLEX a[], int lda, IDL_DCOMPLEX taua[], IDL_DCOMPLEX b[], int ldb, IDL_DCOMPLEX taub[]);
int culaZheev(char jobz, char uplo, int n, IDL_DCOMPLEX a[], int lda, double w[]);
int culaZheevx(char jobz, char range, char uplo, int n, IDL_DCOMPLEX a[], int lda, double vl, double vu, int il, int iu, double abstol, IDL_LONG m[], double w[], IDL_DCOMPLEX z[], int ldz, IDL_LONG ifail[]);
int culaZherdb(char jobz, char uplo, int n, int kd, IDL_DCOMPLEX a[], int lda, double d[], double e[], IDL_DCOMPLEX tau[], IDL_DCOMPLEX z[], int ldz);
int culaZhetrd(char uplo, int n, IDL_DCOMPLEX a[], int lda, double d[], double e[], IDL_DCOMPLEX tau[]);
int culaZlacpy(char uplo, int m, int n, IDL_DCOMPLEX a[], int lda, IDL_DCOMPLEX b[], int ldb);
int culaZlag2c(int m, int n, IDL_DCOMPLEX a[], int lda, IDL_COMPLEX sa[], int ldsa);
int culaZlange(char norm, int m, int n, IDL_DCOMPLEX a[], int lda, double result[]);
int culaZlanhe(char norm, char uplo, int n, IDL_DCOMPLEX a[], int lda, double result[]);
int culaZlar2v(int n, IDL_DCOMPLEX x[], IDL_DCOMPLEX y[], IDL_DCOMPLEX z[], int incx, double c[], IDL_DCOMPLEX s[], int incc);
int culaZlarfb(char side, char trans, char direct, char storev, int m, int n, int k, IDL_DCOMPLEX v[], int ldv, IDL_DCOMPLEX t[], int ldt, IDL_DCOMPLEX c[], int ldc);
int culaZlarfg(int n, IDL_DCOMPLEX alpha[], IDL_DCOMPLEX x[], int incx, IDL_DCOMPLEX tau[]);
int culaZlargv(int n, IDL_DCOMPLEX x[], int incx, IDL_DCOMPLEX y[], int incy, double c[], int incc);
int culaZlartv(int n, IDL_DCOMPLEX x[], int incx, IDL_DCOMPLEX y[], int incy, double c[], IDL_DCOMPLEX s[], int incc);
int culaZlascl(char type, int kl, int ku, double cfrom, double cto, int m, int n, IDL_DCOMPLEX a[], int lda);
int culaZlasr(char side, char pivot, char direct, int m, int n, double c[], double s[], IDL_DCOMPLEX a[], int lda);
int culaZlaswp(int n, IDL_DCOMPLEX a[], int lda, int k1, int k2, IDL_LONG ipiv[], int incx);
int culaZlaswpcol(int n, IDL_DCOMPLEX a[], int lda, int k1, int k2, IDL_LONG ipiv[], int incx);
int culaZlat2c(char uplo, int n, IDL_DCOMPLEX a[], int lda, IDL_COMPLEX sa[], int ldsa);
int culaZpbtrf(char uplo, int n, int kd, IDL_DCOMPLEX ab[], int ldab);
int culaZposv(char uplo, int n, int nrhs, IDL_DCOMPLEX a[], int lda, IDL_DCOMPLEX b[], int ldb);
int culaZpotrf(char uplo, int n, IDL_DCOMPLEX a[], int lda);
int culaZpotri(char uplo, int n, IDL_DCOMPLEX a[], int lda);
int culaZpotrs(char uplo, int n, int nrhs, IDL_DCOMPLEX a[], int lda, IDL_DCOMPLEX b[], int ldb);
int culaZpptrf(char uplo, int n, IDL_DCOMPLEX ap[]);
int culaZsteqr(char compz, int n, double d[], double e[], IDL_DCOMPLEX z[], int ldz);
int culaZtrtri(char uplo, char diag, int n, IDL_DCOMPLEX a[], int lda);
int culaZtrtrs(char uplo, char trans, char diag, int n, int nrhs, IDL_DCOMPLEX a[], int lda, IDL_DCOMPLEX b[], int ldb);
int culaZungbr(char vect, int m, int n, int k, IDL_DCOMPLEX a[], int lda, IDL_DCOMPLEX tau[]);
int culaZunghr(int n, int ilo, int ihi, IDL_DCOMPLEX a[], int lda, IDL_DCOMPLEX tau[]);
int culaZunglq(int m, int n, int k, IDL_DCOMPLEX a[], int lda, IDL_DCOMPLEX tau[]);
int culaZungql(int m, int n, int k, IDL_DCOMPLEX a[], int lda, IDL_DCOMPLEX tau[]);
int culaZungqr(int m, int n, int k, IDL_DCOMPLEX a[], int lda, IDL_DCOMPLEX tau[]);
int culaZungrq(int m, int n, int k, IDL_DCOMPLEX a[], int lda, IDL_DCOMPLEX tau[]);
int culaZunmlq(char side, char trans, int m, int n, int k, IDL_DCOMPLEX a[], int lda, IDL_DCOMPLEX tau[], IDL_DCOMPLEX c[], int ldc);
int culaZunmql(char side, char trans, int m, int n, int k, IDL_DCOMPLEX a[], int lda, IDL_DCOMPLEX tau[], IDL_DCOMPLEX c[], int ldc);
int culaZunmqr(char side, char trans, int m, int n, int k, IDL_DCOMPLEX a[], int lda, IDL_DCOMPLEX tau[], IDL_DCOMPLEX c[], int ldc);
int culaZunmrq(char side, char trans, int m, int n, int k, IDL_DCOMPLEX a[], int lda, IDL_DCOMPLEX tau[], IDL_DCOMPLEX c[], int ldc);
