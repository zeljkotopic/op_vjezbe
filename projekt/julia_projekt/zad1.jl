#Napisati funkciju koja vraća najduži zajednički podstring u dva stringa.

                                               
s1 = "statistika je znanost o podacima"       
s2 = "ja o podacima i znanosti znam malo je"
r1 = split(s1)                                            #razbija string na dijelove i pretvara ga u niz 
r2 = split(s1)       
for i in length(r1)                  
    for j in length(r2)               
        if isequal(i,j)              
            tmp = r1[i]
            if r1[i] > tmp
                println(r1[i])
            else
                println(tmp)
            end
        end
    end
end                                         

