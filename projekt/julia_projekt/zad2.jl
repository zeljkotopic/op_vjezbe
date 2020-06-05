
niz = [n * m for n in 1:5,m in 1:5]   #korištenje for petlje unutar niza
function fun(niz)
    tmp = []
     for i in niz
        if (i%2 != 0)
            i = i*1000/2                    #uvećavanje parnih brojeva za 500
            push!(tmp,i)
        else
            i = i .+ pi       #uvećavanje neparnih brojeva u nizu za neku vrijednost,u ovom slučaju pi
            push!(tmp,i)
        end
    end
    return tmp
end
x = []
x=fun(niz)
println(niz)
println(x)