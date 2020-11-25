const V = new Array();
const Qx = new Array();
const data = {
    Vh: 149,
    Vc: 7.5,
    q: [7.6, 6.6, 4.6, 5, 5.7, 8, 12.5, 18, 20, 13, 11],
    Q: [8.14, 37.47, 23.43, 23.84, 12.73, 23.03, 6.2, 3.3, 1.54, 3.62, 3.63, 7.48],
    qtt: [0.48, 0.31, 0.14, 0.07, 0.07, 0.28, 0.57, 0.7, 0.76, 0.75, 0.71, 0.62],
    delTaT: [31, 30, 31, 31, 30, 31, 30, 31, 31, 29, 31, 30],
    e: 2,
};
PPlapTT(V, Qx, data.Vh, data.Vc, data.q, data.Q, data.qtt, data.e, data.delTaT);

function PPlapTT(V, Qx, Vh, Vc, q, Q, qtt, e, delTaT) {
    const Vbt = Vh + Vc;
    const Vmax = Vbt;
    V[0] = Vc;
    for(i = 1; i < Q.length-1; i++) {
        V[i] = V[i-1] + (Q[i] - q[i])*delTaT[i]*0.084;
        if(V[i] > Vmax) {
            Qx[i] = ((V[i] - Vmax)*Math.pow(10, 6))/delTaT[i]/(24*60*60);
            V[i] = Vmax;
        };
        if(V[i] <= Vmax && V[i] >= Vc) {
            Qx[i] = 0;
        };
        if(V[i] < Vmax && V[i] < Vc) {
            console.log('tang gia tri Vh');
            return;
        };
        q[i] = q[i] + Qx[i] + qtt[i];
    };
    console.log(V)
    if(Math.abs(Math.min(V.shift()) - Vc) < e && Math.abs(Math.max(V)-Vbt) < e) {
        console.log('Stop');
    };
    if(Math.abs(Math.min(V.shift()) - Vc) > e || Math.abs(Math.max(V)-Vbt) > e ) {
        console.log('Giam gia tri Vh');
    };
};





