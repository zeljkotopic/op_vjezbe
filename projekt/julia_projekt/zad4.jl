#korištenje skupova podataka,u ovom slučaju o virusu covid-19 i zaraženima,čitanje tog skupa podataka,ispisivanje,ispisivanje veličine i kontinenata

using DataFrames, HTTP, CSV
df = CSV.read("preuzmi.csv")

function print_continent(df)
    for c in eachcol(df)
        if(c == df.continentExp)
            print(c)
        end
    end
end

print(size(df))               
print_continent(df)           
print(df)




