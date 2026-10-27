int test_func(void) {
    int v0 = 59;
    int v1 = 97;
    int v2 = 53;
    int v3 = 0;
    int i;
    if (v1 > v3) { v1 = v3; }
    v3 = v3 + v1;
    return v0;
}
int main(void) { return test_func(); }
