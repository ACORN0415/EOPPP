int test_func(void) {
    int v0 = 23;
    int v1 = 21;
    int v2 = 49;
    int i;
    v1 = v1 - v2;
    v2 = v2 + v1;
    if (v2 > v0) { v2 = v0; }
    v1 = 47;
    return v0;
}
int main(void) { return test_func(); }
