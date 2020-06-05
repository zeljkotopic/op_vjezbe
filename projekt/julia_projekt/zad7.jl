#primjer čitanja skupova podataka s interneta
using DataFrames, HTTP, CSV
resp = HTTP.request("GET", "https://data.cityofnewyork.us/api/views/kku6-nxdu/rows.csv?accessType=DOWNLOAD") #dohvat podataka
df = CSV.read(IOBuffer(String(resp.body)))   #jednostavno citanje tih podataka s interneta
prinf(df)

#primjer čitanja skupova podataka(data set)
supplytable = CSV.read(IOBuffer("""
prod      Epinal Bordeaux Grenoble
Fuelwood  400    700      800
Sawnwood  800    1600     1800
Pannels   200    300      300
"""), delim=" ", ignorerepeated=true, copycols=true)  

#primjer pisanja svojih skupova podataka i neke funkcije s kojima možemo manipulirati tim podacima
df = DataFrame(
colors= ["green","blue","white","green","green"],
shape  = ["circle", "triangle", "square","square","circle"],
border = ["dotted", "line", "line", "line", "dotted"],
area   = [1.1, 2.3, 3.1, missing, 5.2])
print(names(df))
print(last(df, 2))
select!(df, Not([:colors, :area]))     #brisanje stupaca

