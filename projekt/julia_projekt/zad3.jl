#strukture sa podacima životinja,stvaranje nizova tih vrsta životinja i neke manipulacije s tim podacima

abstract type Animal end

struct Tigar <: Animal   
    sort :: String
    name :: String
    year :: Int
    meals_per_day :: Int
    weight :: Int
    life_exp :: Int
    agressive :: Bool
end

struct Cow <: Animal
    name :: String
    year :: Int
    weight :: Int
    life_exp :: Int
end

struct Monkey <: Animal
    sort :: String
    name :: String
    year :: Int
    life_exp :: Int
    agressive :: Bool
end

struct Lion <: Animal                   
    name :: String
    year :: Int
    agressive :: Bool
    sex :: String
    weight :: Int
end

mutable struct Dog <: Animal         
    name :: String
    sort :: String
    meals :: Array{String,1}
    year :: Int
    Dog(name::String,sort::String,meals :: Array{String,1},year :: Int) = new(name,sort,meals,year)  #konstruktor
end
d = Dog("Riki","German shepard",["ham","sausages","bones"],2)
println(d)

li = Lion[]
push!(li,Lion("Lana",8,true,"female",200))            
push!(li,Lion("Dana",8,true,"female",250))
push!(li,Lion("Lucky",15,true,"male",350))
push!(li,Lion("Lia",12,true,"female",290))
push!(li,Lion("Ron",3,true,"male",100))

tig = Tigar[]
push!(tig,Tigar("Asian tigar","Jane",5,1,400,15,true))   #jednostavno ubacivanje u niz
push!(tig,Tigar("Bengal tigar","Mark",6,1,500,15,false))
push!(tig,Tigar("White tigar","Mark Jr",1,1,100,15,true))

m = Monkey[]
push!(m,Monkey("Gorilla","Jane",10,30,true))
push!(m,Monkey("Orangutan","Horcio",30,50,false))
push!(m,Monkey("Orangutan","Doo",10,50,false))

c = Cow[]
push!(c,Cow("Ana",3,300,7))
push!(c,Cow("Lisa",1,70,7))
push!(c,Cow("Ila",6,450,7))

function print_kilo_tigar(x)
    for i in x
        print("kg :")               
        println(i.weight)           
    end
end

function agress(x)
    for i in x
        if(i.agressive == true)
            print("agressive:")
            println(i.sort)
        end
    end
end

function old(x) 
    for i in x                           
        if(i.year > 4)
            print("old:")
            println(i.name)
        end
    end    
end

function addkg(x,y)
    t = 0
    k = 0
    uk = 0
    for i in x
        t+=i.weight
        for j in y
           k+=j.weight
        end
    end
    uk = t + k
    print("join kg:")
    println(uk)
end

addkg(c,tig)                             
print_kilo_tigar(tig)
print_kilo_tigar(li)
agress(m)
agress(tig)
old(c)



