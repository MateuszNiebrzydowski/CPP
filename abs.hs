abs::Float->Float
abs x=if x<0 then (-x) else x

abs2 x
 |x<0 =(-x)
 |otherwise = x

min::Float->Float->Float
min x y = if x<y then x else y

min2 x y
 |x < y = x
 |otherwise = y

sgn::Float->Float
sgn x = if x > 0 then 1
else if x < 0 then (-1)
else 0

sgn2 x
 |x > 0 = 1
 |x < 0 = (-1)
 |otherwise = 0

albo_albo1::(Bool,Bool)->Bool
albo_albo1 (p,q) = case (p,q) of (True,True)->False
				 (True,False)->True
				 (False,True)->True
				 (False,False)->False

albo_albo2 (p,q) = if p==q then False else True

first::(a,b,c)->a
first(x,_,_)=x
second::(a,b,c)->b
second(_,y,_)=y
third::(a,b,c)->c
third(_,_,z)=z

sprawdz::Int->String
sprawdz x
 |x < 0 = "Liczba jest mniejsza od 0"
 |x > 10 = "Liczba jest wieksza od 10"
 |otherwise = "Liczba jest z przedzialu od 0 do 10"

kwadrat x=x*x
kwadrat_lista::[Int]->[Int]
kwadrat_lista []=[]
kwadrat_lista (x:xs)=(kwadrat x):(kwadrat_lista xs)

--[(x,y) | x<-[1..3], y<-[x..3]]

kwadrat_lista2::[Int]->[Int]
kwadrat_lista2 xs=[x*x|x<-xs]

lista_mniejszao2::[Int]->[Int]
lista_mniejszao2 xs=[x-2|x<-xs]

lista_razy5::[Int]->[Int]
lista_razy5 xs=[x*5|x<-xs]

razy_dwa x = 2*x
razy_dwa_lista [] = []
razy_dwa_lista (x:xs) = (razy_dwa x) : (razy_dwa_lista xs)

kwadrat_lista3::[Int]->[Int]
kwadrat_lista3 xs = map kwadrat xs