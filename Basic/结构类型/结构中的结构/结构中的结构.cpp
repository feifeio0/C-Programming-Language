结构中的结构
 

struct point {
	int x;
	int y;
}; 

struct rectangle{
	struct point pt1;
	struct point pt2;
};

struct rectangle  r或*rp或rp = &r;
就可以有 
r.pt1.x;
rp->pt1.x;
(r.pt1).x;
(rp->pt1).x 
 
