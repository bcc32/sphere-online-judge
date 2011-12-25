gets.to_i.times do
    puts (gets.split[0].reverse.to_i + \
        $_.split[1].reverse.to_i).to_s.reverse.to_i
end
