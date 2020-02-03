sub javatoc
{
    my @words = shift;
    $s = "";
    for (@words)
    {
        if (/[A-Z]/)
        {
            $s .= '_' . ($_ =~ y/A-Z/a-z/r);
        }
        else
        {
            $s .= $_;
        }
    }
    return $s;
}

sub ctojava
{
    my @words = shift;
    $s = "";
    for (@words)
    {

    }
    #FIXME
    $s =~ y/A-Z/a-z/r;
}

while(<>)
{
    if (/^[_a-z]+$/)
    {
        @words = split /_/;
        print join ',', @words;
    }
    elsif (/^[A-Za-z]+$/)
    {
        @words = split /([A-Z])/;
        print join ',', @words;
    }
    else
    {
        print "Error!\n";
    }
}
