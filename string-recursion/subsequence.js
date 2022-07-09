let subseq = (p, up) => {
    if (up === "") {
        console.log(p);
        return ;
    }
    let ch = up[0];
    subseq(p + ch, up.substring(1));
    subseq(p, up.substring(1));
}
subseq("","abc");