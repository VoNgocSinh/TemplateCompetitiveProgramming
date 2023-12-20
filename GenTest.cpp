mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int Rand(int l,int r) {

    if (l>r) {
        cout << "Error l>r\n";
        assert(l>r);
    }

    return l+abs((int)rng()%(r-l+1));

}

@echo off

for /l %%i in (1, 1, 100000) do (

    CreateTest.exe > test.inp
    A.exe < test.inp > test.out
    B.exe < test.inp > answer.out
    fc test.out answer.out > 0 || echo TEST %%i [WA] && type test.inp && goto :out
    echo TEST %%i [AC]

)

:out
