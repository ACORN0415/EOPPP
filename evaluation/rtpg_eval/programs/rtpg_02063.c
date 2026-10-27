int test_func(void) {
    int v0 = 90;
    int v1 = 94;
    int v2 = 72;
    int i;
    if (v0 > v2) { v0 = v2; }
    v2 = v2 - v1;
    v1 = v1 + v2;
    return v0;
}
int main(void) { return test_func(); }
