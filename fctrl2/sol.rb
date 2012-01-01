gets.to_i.times do
    puts (1..gets.to_i).inject {|x, y| x * y}
end
