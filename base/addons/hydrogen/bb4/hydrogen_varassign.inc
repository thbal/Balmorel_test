* File hydrogen_varassign.inc for addon hydrogen.

$ifi %H2TransInvest%==yes        VXH2KN.FX(IY411FIRST,IRE,IRI)$SUM(Y$(YVALUE(Y) LE YVALUE(IY411FIRST)),IXH2KN(Y,IRE,IRI))= VXH2KN.L(IY411FIRST,IRE,IRI);
$ifi %H2TransInvest%==yes        VXH2KNACCUMNET.FX(IY411FIRST,IRE,IRI)$SUM(Y$(YVALUE(Y) LE YVALUE(IY411FIRST)),IXH2KN(Y,IRE,IRI))= VXH2KNACCUMNET.L(IY411FIRST,IRE,IRI);
$ifi %H2TransInvest%==yes        VXH2KN_NGTOH2.FX(IY411FIRST,IRE,IRI)$SUM(Y$(YVALUE(Y) LE YVALUE(IY411FIRST)),IXH2KN_NGTOH2(Y,IRE,IRI))= VXH2KN_NGTOH2.L(IY411FIRST,IRE,IRI);
$ifi %H2TransInvest%==yes        VXH2KNACCUMNET_NGTOH2.FX(IY411FIRST,IRE,IRI)$SUM(Y$(YVALUE(Y) LE YVALUE(IY411FIRST)),IXH2KN_NGTOH2(Y,IRE,IRI))= VXH2KNACCUMNET_NGTOH2.L(IY411FIRST,IRE,IRI);
$ifi %H2TransInvest%==yes $ifi %ES_H2TRANS%==yes        VXH2LAMBDA.FX(IY411FIRST,IRE,IRI,XES)$(SUM(Y$(YVALUE(Y) LE YVALUE(IY411FIRST)),IXH2KN(Y,IRE,IRI)) AND IXH2KN_ES(IRE,IRI))=VXH2LAMBDA.L(IY411FIRST,IRE,IRI,XES);